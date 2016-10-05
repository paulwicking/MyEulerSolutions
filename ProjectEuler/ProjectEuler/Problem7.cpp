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

    for (int i = 1; i <= 10001; i++)
    {
        // is this for statement smart or not?
        for (auto j = 0; IsPrime(j); j++);
        
        Result = i;
    }


    std::cout << "The 10 001st prime number is " << Result;

    // TODO remove this when finished
    std::cout << "This problem has not been solved yet.\n";

}
bool Problem7::IsPrime(long long NumberToCheck)
{
    // TODO: write function to check for prime numbers
}