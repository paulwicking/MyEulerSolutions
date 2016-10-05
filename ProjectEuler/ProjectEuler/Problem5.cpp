#include "Problem5.h"
#include "StandardHeaders.h"


Problem5::Problem5()
{
}

Problem5::~Problem5()
{
}

void Problem5::Solution()
{
    // 2520 is the smallest number that can be divided by each of the numbers 
    // from 1 to 10 without any remainder. What is the smallest positive number
    // that is evenly divisible by all of the numbers from 1 to 20 ?

    // iterate through number range 
    for (int CurrentNumber = RangeStart;
         CurrentNumber <= RangeEnd;
         CurrentNumber++
         )
    {
        // prime factorize each number 
        int DivideThisNumber = CurrentNumber;
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
    }

    // sort the vector and remove duplicates
    std::sort(MyPrimeFactors.begin(), MyPrimeFactors.end());
    auto DuplicatePrimeEntries = std::unique(MyPrimeFactors.begin(), MyPrimeFactors.end());
    MyPrimeFactors.erase(DuplicatePrimeEntries, MyPrimeFactors.end());

    // Get the result by multiplying prime factors raised to the power of x 
    // where x is less than or equal to end of range
    for (size_t i = 0; i < MyPrimeFactors.size(); i++)
    {
        int Multiplier = MyPrimeFactors[i];
        while (Multiplier <= RangeEnd)
        {
            if ((Multiplier * Multiplier) >= RangeEnd)
            {
                break;
            }
            else { Multiplier *= Multiplier; }
        }
        Result *= Multiplier;
    }
    
    std::cout
        << Result
        << " is the lowest number evenly divisible by all numbers in"
        << " the range 1 - 20.\n";
}
