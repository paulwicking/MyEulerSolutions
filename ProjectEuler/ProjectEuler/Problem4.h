// A palindromic number reads the same both ways. The largest palindrome 
// made from the product of two 2 - digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers

#pragma once
#include <vector>

class Problem4
{
public:
    Problem4();
    ~Problem4();

    void Solution();
    bool IsPalindrome(int CheckThisNumber);
private:
    int Number1 = 999, Number2 = 999, Max = 0, CheckThisNumber = 0;
    std::vector<int> FoundPalindromes;

};
