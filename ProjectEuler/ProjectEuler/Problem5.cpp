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

    const int RangeStart = 1, RangeEnd = 20;

    // create a vector of the numbers we want to find the LCM of
    std::vector<int> MyPrimeFactors;

    // iterate through number range 
    for (int CurrentNumber = RangeStart;
         CurrentNumber <= RangeEnd;
         CurrentNumber++
         )
    {
        // TODO: find number of common prime factors
        // should be able to find 2 2 2 2 3 3 5 7 11 13 17 19

        // TODO: this is possibly not required... study solution.
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

    // sort and count number of factors
    std::sort(MyPrimeFactors.begin(), MyPrimeFactors.end());

    // TODO calculate the LCM of the results
    long long LeastCommonMultiple = 0;
 
    //std::cout 
    //    << LeastCommonMultiple << " is the smallest positive number that is"
    //    << " evenly divisible by all numbers in the range 1 to 20.\n";

    // TODO: Remove this when problem5 is finished
    std::cout << "\n\n Problem 5 is not complete.\n";
}
