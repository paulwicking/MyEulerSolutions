#pragma once
#include "Problem7.h"
#include "StandardHeaders.h"


Problem7::Problem7()
{
}

Problem7::~Problem7()
{
}

void Problem7::Solution()
{
    // By listing the first six prime numbers : 2, 3, 5, 7, 11, and 13, 
    // we can see that the 6th prime is 13.

    // What is the 10 001st prime number ?

    auto Result = 0;

    auto LastPrime = 0;
    auto CurrentNumber = 0;
    
    for (int PrimeCounter = 0; PrimeCounter <= 10000; ++PrimeCounter)
    {
        for (CurrentNumber = LastPrime+1; PrimeCounter <= 10000; ++CurrentNumber)
        {
            if (IsPrime(CurrentNumber))
            {
                LastPrime = CurrentNumber;
                Result = LastPrime;
                goto PrimeCounterLoop;
            }
        }
    PrimeCounterLoop:;
    }  
    std::cout << "The 10 001st prime number is " << Result << std::endl;
}

bool Problem7::IsPrime(long long NumberToCheck)
{
    if (NumberToCheck <= 1) { return false; }
    else if (NumberToCheck <= 3) { return true; } // 2 and 3 are primes
    else if ((NumberToCheck % 2 == 0) || (NumberToCheck % 3 == 0)) 
    { 
        return false; 
    } else {
        for (int i = 5; i * i <= NumberToCheck; i += 6)
        {
            if ((NumberToCheck % i == 0)
                || (NumberToCheck % (i + 2) == 0))
            {
                return false;
            }
        }
        return true;
    }
}
