// smallest_element.cpp - find the smallest element in an array.
// compile with: g++ smallest_element.cpp -std=c++11 -o test

#include <iostream>
#include <climits>

using namespace std;

int smallest_element(int* arr, int size)
{
    int smallest = INT_MAX;
    for (int* current = arr; current < arr + size; current++)
    {
        if (*current < smallest)
        {
            smallest = *current;
        }
    }
    return smallest;
}

int main()
{
    int size = 10;
    int* arr = new int[size]
    {1,2,4,5,10,100,2,-22};

    cout << "the smallest number is " << smallest_element(arr, size) << endl;
}

