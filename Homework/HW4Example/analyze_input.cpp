// dynamic allocation example
// // compile with  g++ analyze_input.cpp -o test
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

int aboveAverage(int* numbers, int size)
{
    // First, find the average value
    double avg = 0;
    for (int* current = numbers; current < numbers + size; current++)
    {
        avg += *current;
    }
    avg /= size;

    // Next, count how many values are above/below average
    int count = 0;
    for (int* current = numbers; current < numbers + size; current++)
    {
        if (*current > avg)
        {
            count++;
        }
    }
    return count;
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
    cout << aboveAverage(numbers, nums) 
        << " of the numbers were above average." 
        << endl;

    delete[] numbers;
}

