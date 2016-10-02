#include "Problem3.h"
#include "StandardHeaders.h"


Problem3::Problem3()
{
    Solution();
}

Problem3::~Problem3()
{
}

void Problem3::Solution()
{
    while (DivideThisNumber > 1)
    {
        for (int Divisor = 2; Divisor <= DivideThisNumber; Divisor++)
        {
            if (DivideThisNumber % Divisor == 0)
            {
                MyPrimeFactors.push_back(Divisor);
                DivideThisNumber = DivideThisNumber / Divisor;
                Divisor = 1;
            }
        }
    }

    // output results
    std::cout << "The prime factors of " << NUMBER_TO_FACTORIZE << " are: \n";
    for (size_t i = 0; i < MyPrimeFactors.size(); i++)
    {
        std::cout << MyPrimeFactors[i] << std::endl;
    }
}
