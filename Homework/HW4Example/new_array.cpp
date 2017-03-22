// new_array.cpp - resize an array.
//  compile with g++ new_array.cpp -std=c++11 -o test
//
#include <iostream>

using namespace std;

int* doubleCapacity(const int* list, int size)
{
    // new array
    int new_size  = size*2;
    int* new_array = new int[new_size];

    //  initialize
    for (int* p = new_array; p < new_array+new_size; p++)
    {
        *p = 0;
    }

    // copy values from 'list' to new array
    for (int i = 0; i < size; i++)
    {
        new_array[i] = list[i];
    }
    return new_array;
}

int main()
{
    int size = 5;
    int* list = new int[size]
    {3,2,6,4,1}; // or whatever....

    int* new_list = doubleCapacity(list, size);

    for (int i = 0; i < size*2; i++)
    {
        cout << new_list[i] << ", ";
    }
    cout << endl;
    
    delete [] new_list;
    delete [] list;
}
