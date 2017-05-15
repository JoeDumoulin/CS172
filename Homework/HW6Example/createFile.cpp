// createFile - create a file and put data in it.  
// if it exists, append data.
// compile with: g++ createFile.cpp -std=c++11 -o test
#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    ofstream outfile("Exercise13_1.txt", ios::app);
    for (int i = 0; i < 100; i++)
    {
        int r = rand() % 100;
        outfile << r << " ";
    }
    outfile << endl;
    outfile.close();
}

