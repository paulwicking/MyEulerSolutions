// Project euler problem 9:
// A Pythagorean triplet is a set of three natural numbers
// a < b < c, for which, a2 + b2 = c2
// For example, 32 + 42 = 9 + 16 = 25 = 52.

// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include <stdio.h>
#include <stdbool.h> // for bool macro for _Bool

int main(void)
{
    int a = 0, b = 0, c = 0;
    int target = 1000;
    int amax = (target - 3) / 3; // a cannot be larger than target / 3
    int bmax = (target - 1 - a) / 2; // b cannot be larger than target / 2
    bool done = false;

    for(a = 3; a <= amax; a++) // a must start at 3
    {
        for(b = a + 1; b <= bmax; b++) // b must be larger than a
        {
            c = target - a - b; // a + b + c = target
            if (a * a + b * b == c * c) { // if pythagorean triplet
            done = true;
            break; // break inner loop
            }
	}
        if (done) { break; } // break out loop if done
    }

    printf("%i\n", a * b * c);

    return 0;
}

