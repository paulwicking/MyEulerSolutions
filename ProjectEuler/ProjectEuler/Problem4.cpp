#include "Problem4.h"
#include "StandardHeaders.h"


Problem4::Problem4()
{
}

Problem4::~Problem4()
{
}

void Problem4::Solution()
{
    for (int OuterLoop = 999; OuterLoop > 99; OuterLoop--)
    {
        for (int InnerLoop = 999; InnerLoop > 99; InnerLoop--)
        {
            CheckThisNumber = OuterLoop * InnerLoop;
            if (IsPalindrome(CheckThisNumber))
            {
                FoundPalindromes.push_back(CheckThisNumber);
            }
        }
    }

    for (size_t i = 0; i < FoundPalindromes.size(); i++)
    {
        if (FoundPalindromes[i] >= Max) { Max = FoundPalindromes[i]; };
    }
    std::cout << Max <<
        " is the biggest palindrome product of two three-digit numbers.";
}

bool Problem4::IsPalindrome(int ResultToCheck)
{
    // create an array of ResultToCheck
    int MyPalindrome[6];
    for (int i = 0; i < 6; i++)
    {
        MyPalindrome[i] = ResultToCheck % 10;
        ResultToCheck /= 10;
    }

    // compare first and last digit
    if (MyPalindrome[0] == MyPalindrome[5])
    {
        // compare second and second-to-last digit
        if (MyPalindrome[1] == MyPalindrome[4])
        {
            // if third and fourth digits are the same, return true
            if (MyPalindrome[2] == MyPalindrome[3])
            {
                return true;
            }
        }
    }
    return false; // Number is not a palindrome
}
