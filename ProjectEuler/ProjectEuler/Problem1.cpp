#include "Problem1.h"
#include "StandardHeaders.h"

Problem1::Problem1()
{
    Solution();
}

Problem1::~Problem1()
{
}

void Problem1::Solution()
{
    std::cout << "This application provides the sum of all multiples of "
        << std::endl << "3 or 5 below 1000.";

    for (int NumberToCheck = 1; NumberToCheck < MAX_NUMBER; NumberToCheck++)
    {
        if ((NumberToCheck % 3 == 0) || (NumberToCheck % 5 == 0)) {
            TotalSum = TotalSum + NumberToCheck;
        }
    }

    std::cout << std::endl << std::endl;
    std::cout << "The sum is " << TotalSum << "." << std::endl;
}
