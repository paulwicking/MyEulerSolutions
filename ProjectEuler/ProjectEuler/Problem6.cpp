#include "Problem6.h"
#include "StandardHeaders.h"


Problem6::Problem6()
{
}


Problem6::~Problem6()
{
}

void Problem6::Solution()
{
    // The sum of the squares of the first ten natural numbers is,
    // 1^2 + 2^2 + ... + 10^2 = 385
    // The square of the sum of the first ten natural numbers is,
    // (1 + 2 + ... + 10)^2 = 55^2 = 3025

    // Hence the difference between the sum of the squares of the first ten 
    // natural numbers and the square of the sum is 3025 - 385 = 2640.
    // Find the difference between the sum of the squares of the first one 
    // hundred natural numbers and the square of the sum.

    auto SumOfSquares = 0;
    auto SquareOfSums = 0;
    auto Result = 0;

    for (int i = 1; i <= 100; i++) { SumOfSquares += (i * i); }
    for (int i = 1; i <= 100; i++) { SquareOfSums += i; }
    SquareOfSums *= SquareOfSums;
    Result = SquareOfSums - SumOfSquares;


    std::cout << "This problem has not been solved yet.\n";
    std::cout << "Result = " << Result;
}
