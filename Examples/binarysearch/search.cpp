// Given a sorted list, search efficiently for an element in the list.
//
#include <vector>
#include <iostream>

bool bSearch(const std::vector<int>& a, int lo, int hi, int X)
{ 
    if (hi - lo < 0){
        return false;
    } 
    int m = (lo + hi) /2;
    if (X == a[m]){
        return true;  // found
    }
    if (X < a[m]) 
        return bSearch(a, lo, m-1, X);
    else
        return bSearch(a, m+1, hi, X);
}

void printResult(const std::vector<int>& a, int X)
{
    std::cout << X << " is ";
    auto b = bSearch(a, 0, a.size(), X);
    if (!b)
        std::cout << "not ";
    std::cout << "in list." << std::endl;
}


int main()
{
    std::vector<int> v1 {-1, 0, 4};

    printResult(v1, 0);
    printResult(v1, 1);
}


