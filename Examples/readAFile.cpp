// readAFile.cpp - open a file at a path
// compile with: g++ readAFile.cpp -std=c++11 -o test
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("Z.txt");
    if (fin.fail()) {
        cout << "can't open file" <<endl;
        return 0;
    }
    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
}
