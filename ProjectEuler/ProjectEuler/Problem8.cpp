#include "Problem8.h"
#include "StandardHeaders.h"
#include <sstream>

Problem8::Problem8()
{
}

Problem8::~Problem8()
{
}

void Problem8::Solution()
{
    /// The 1000-digit number is in the string NumberAsString
    // The four adjacent digits in the 1000-digit number that have the greatest
    // product are 9 x 9 x 8 x 9 = 5832.
    // Find the thirteen adjacent digits in the 1000-digit number that have the
    // greatest product. What is the value of this product?

    std::vector<unsigned long long> MyProducts;
    std::vector<std::string> DigitsToMultiply;
    std::string StringOfDigits = "";

    // read character by character from the string  
    for (size_t DigitPosition = 0;
         DigitPosition <= NumberAsString.length();
         ++DigitPosition)
    {
        if (StringOfDigits.size() < 13)
        {
            AddDigitToString(NumberAsString[DigitPosition], StringOfDigits);
        }
        if (StringOfDigits.size() == 13)
        {
            DigitsToMultiply.push_back(StringOfDigits);
            StringOfDigits.erase(0, 1);
        }
    }

    std::string CreateProduct;
    unsigned long long Product = 1;
    int Multiplier = 0;
    for (size_t Factors = 0;
         Factors < DigitsToMultiply.size();
         ++Factors)
    {
        CreateProduct = DigitsToMultiply[Factors];
        for (int i = 0; i < 13; ++i)
        {
            std::stringstream str;
            str << CreateProduct[i];
            str >> Multiplier;
            Product *= Multiplier;
        }
        MyProducts.push_back(Product);
        Product = 1;
    }
    std::sort(MyProducts.begin(), MyProducts.end());
    std::cout
        << "The value of the greatest product of thirteen adjacent digits "
        << "in the 1000-digit number is "
        << MyProducts[MyProducts.size() - 1]
        << std::endl;
}

void Problem8::AddDigitToString(int DigitToAdd, std::string &StringToTouch)
{
    if (DigitToAdd == 48)
    {
        // we found a zero, clear the string and start over
        StringToTouch.clear();
        return;
    }
    else { StringToTouch.push_back(DigitToAdd); }
}
