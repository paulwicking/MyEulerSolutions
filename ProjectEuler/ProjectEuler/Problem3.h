// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#pragma once
#include <vector>

class Problem3
{
public:
    Problem3();
    ~Problem3();

    void Solution();

private:
    const long long NUMBER_TO_FACTORIZE = 600851475143;
    std::vector<unsigned int> MyPrimeFactors;

    signed long long DivideThisNumber = NUMBER_TO_FACTORIZE;
};
