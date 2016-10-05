#pragma once
#include <vector>


class Problem5
{
public:
    Problem5();
    ~Problem5();

    void Solution();

private:
    const int RangeStart = 1, RangeEnd = 20;

    // vector of numbers we want to find the LCM of
    std::vector<int> MyPrimeFactors;
    
    long long Result = 1;
};
