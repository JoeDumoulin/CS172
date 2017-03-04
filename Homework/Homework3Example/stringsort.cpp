// stringsort.cpp - sort a string.
//
// Sort a string using binary search
// compile with: g++ stringsort.cpp -o stringsort

#include <string>
#include <iostream>

// see section 7.10 sorting arrays
std::string stringSorter(std::string& s)
{
    // std::cout << "s = " << s << std::endl; 
    // find the minimum in the list
    for (int i = 0; i < s.size()-1; i++)
    {
        char currentMin = s[i];
        int currentMinIndex = i;

        for (int j = i+1; j< s.size(); j++)
        {
            if (currentMin > s[j])
            {
                currentMin = s[j];
                currentMinIndex = j;
            }
        }

        if (currentMinIndex != i)
        {
            s[currentMinIndex] = s[i];
            s[i] = currentMin;
        }
    }
    return s;
}

int main()
{
    std::string s;
    std::cout << "enter a string: ";
//    std::cin >> s;
    std::getline(std::cin, s);
    std::cout << std::endl;

    std::cout << "the sorted string string is: " 
        << stringSorter(s) 
        << std::endl;

}
