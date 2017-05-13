#include <stdio.h>
#include <stdbool.h>
bool IsPrime(unsigned long long NumberToCheck);
const int limit = 2000000; // two million

int main(void)
{
	unsigned long long result = 0;
	unsigned long long CurrentNumber = 0, LastPrime = 0;

	for (CurrentNumber = LastPrime +1; CurrentNumber <= limit; CurrentNumber++) 
	{
		if(IsPrime(CurrentNumber)) {
			LastPrime = CurrentNumber;
			result += LastPrime;
			}
	}

	printf("%llu\n", result);

	return 0;
}

bool IsPrime(unsigned long long NumberToCheck)
{
	if (NumberToCheck <= 1) { 
		return false; // 0 and 1 are not prime
	}
	else if (NumberToCheck <= 3) {
		return true; // 2 and 3 are prime
	}
	else if ((NumberToCheck % 2 == 0) || (NumberToCheck % 3 == 0)) {
		return false;
	}
	else
	{
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

