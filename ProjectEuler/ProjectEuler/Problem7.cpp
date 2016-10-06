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

    for (int i = 1; i <= 10001; ++i)
    {
        // TODO fix this loop
		for (auto j = i; j <= i; ++j)
		{
			std::cout << "i is " << i << " and j is " << j << "\n";
			if (IsPrime(j)) { Result = j; }
		}
    }


    std::cout << "The 10 001st prime number is " << Result;

    // TODO remove this when finished
    std::cout << "This problem has not been solved yet.\n";

}

bool Problem7::IsPrime(long long NumberToCheck)
{
    // TODO: write function to check for prime numbers
	if (NumberToCheck <= 1) { return false; } 
	if (NumberToCheck <= 3) { return true; } // 2 and 3 are primes
	if ((NumberToCheck % 2 == 0) || (NumberToCheck % 3 == 0)) { return false; }

	for (int i = 5; (i * i) <= NumberToCheck; (i + 6))
	{
		if ((NumberToCheck % i == 0) 
			|| (NumberToCheck % (NumberToCheck + 2) == 0))
		{
			return false;
		}
	}
	return true;
}