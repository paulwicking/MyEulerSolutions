#include "Problem2.h"
#include "StandardHeaders.h"


Problem2::Problem2()
{
    Solution();
}

Problem2::~Problem2()
{
}

void Problem2::Solution() {
    std::cout << "This application provides the sum of all even Fibonacci "
        << std::endl << "numbers whose value is less than 4 000 000." 
        << std::endl;

    for (int CurrentNumber = 1;
         CurrentNumber < MAX_NUMBER;
         CurrentNumber = NextNumber)
    {
        if (!(CurrentNumber % 2))
        {
            TotalSum = TotalSum + CurrentNumber;
        }
        NextNumber = LastNumber + CurrentNumber;
        LastNumber = CurrentNumber;
    }

    std::cout << std::endl << std::endl;
    std::cout << "The sum is " << TotalSum << "." << std::endl;
}
