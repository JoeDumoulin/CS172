// queryNames.cpp - find the popularity of a name in a year.
// compile with: g++ queryNames.cpp -o test
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

class BabyName
{
    private:
        int     _rank;
        string  _name;
        char    _gender;
        int     _popularity;
        int     _year;
    public:
        BabyName(int rank, string name, char gender, int popularity, int year)
        {
            _rank = rank;
            _name = name;
            _gender = gender;
            _popularity = popularity;
            _year = year;
        }
        int getRank() const
        {
            return _rank;
        }
        string getName() const 
        {
            return _name;
        }
        char getGender() const
        {
            return _gender;

        }
        int getPopularity() const
        {
            return _popularity;
        }

        int getYear() const
        {
            return _year;
        }

        friend ostream& operator<<(ostream& os, const BabyName& b);

};

ostream& operator<<(ostream& os, const BabyName& b)
{
    string gender;
    if (b.getGender() == 'M')
        gender = "boys";
    else
        gender = "girls";
    os << b.getName() << " is ranked " 
        << b.getRank() << " most popular name for " 
        << gender << " in the year " << b.getYear() << endl;
    return os;
}

void printBabyName(ifstream& is, int year, char gender, string trialname)
{
    // read the file in a loop
    string name;
    char ngender;
    char lastgender = 'F';
    int popularity;
    int rank = 0;
    string row;
    while (getline(is, row))
    {
        // read the row for each element
        is >> name >> ngender >> popularity;
        // check if gender changed to 'M' since 'F' is first
        if (ngender != lastgender)
        {
            rank = 0;
        }
        if (name == trialname && ngender == gender)
        {
            auto baby = BabyName(rank, name, gender, popularity, year);
            cout << baby << endl;
            return;
        }
        lastgender = ngender;
        rank++;
    }
    cout << "name not found" << endl;
}

ostream& getRank(int year, char gender, string name)
{
    static const string path = "/Users/jdumoulin/Documents/dev/CS172-nocommit/HW6Example/splitBabyNames/";
    stringstream ssfilename; ssfilename << "yob" << year << ".txt";
    string filepath = path + ssfilename.str();
    ifstream infile(filepath.c_str());

    // is the file open?
    if (!infile.is_open())
    {
        cout << "file not open: " << filepath;
    }
    printBabyName(infile, year, gender, name);
    infile.close();
}

int main()
{
    int year;
    char gender;
    string name;

    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the gender (M or F): ";
    cin >> gender;
    cout << "Enter the name: ";
    cin >> name;

//    cout << year << endl << gender << endl << name << endl;
    getRank(year,gender, name);
}
