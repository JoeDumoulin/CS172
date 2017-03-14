// dynamic allocation example
// compile with  g++ main.cpp -o test
#include <iostream>

using namespace std;

void prompt_count(int* size)
{
    cout << "how many numbers will you enter? ";
    cin >> *size;
}

void populate_numbers(int* numbers, int size)
{
    for (int* current = numbers; current < numbers + size; current++)
    {
        cout << "Enter a number: ";
        cin >> *current;
    }
}

int countEvens(int* numbers, int size)
{
    int evens = 0;
    for (int* current = numbers; current < numbers + size; current++)
    {
        if (*current % 2 == 0)
            evens++;
    }
    return evens;
}

int* alloc_array(int size)
{
    int* pintarray = new int[size];

    for (int i = 0; i < size; i++)
    {
        pintarray[i] = 0;
    }
    return pintarray;
}

int main()
{
    int nums;
    prompt_count(&nums);

    int* numbers = alloc_array(nums);
    populate_numbers(numbers, nums);
    cout << "you gave me " << countEvens(numbers, nums) << " evens." << endl;

    delete[] numbers;
}

