// numCharsInFile.cpp - Ask for a file name.  If it exists, print the number of characters in the file.
// compile with: g++ numCharsInFile.cpp -o test
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    int wordcount = 0;
    ifstream infile("/Users/jdumoulin/Documents/dev/CS172/Books/Pride and Prejudice.txt");
    if (infile.is_open())
        cout << "file opened successfully" << endl;
    else
        cout << "oops..." << endl;

    while (infile >> word) wordcount++;

    cout << "number of words is " << wordcount << endl;

}

