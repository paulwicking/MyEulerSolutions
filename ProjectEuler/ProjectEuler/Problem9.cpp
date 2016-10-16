#include "Problem9.h"
#include "StandardHeaders.h"



Problem9::Problem9()
{
}


Problem9::~Problem9()
{
}

void Problem9::Solution()
{
    // A Pythagorean triplet is a set of three natural numbers, a < b < c, 
    // for which, a2 + b2 = c2
    // For example, 32 + 42 = 9 + 16 = 25 = 52.

    // There exists exactly one Pythagorean triplet for which a + b + c = 1000.
    // Find the product abc.



    // http://www.matematikk.org/artikkel.html?tid=64751

    // Den endelige løsningen fikk problemet hos Diofant. 
    // I sin bok "Arithmetika" viser han at alle primitive pytagoreiske tripler 
    // framkommer ved å velge passende verdier for p og q i formelen:
    //    (p^2−q^2)^2 + (2pq)^2 = (p^2 + q^2)^2
    
    // Vi kan sette opp en liste over pythagoreiske tripler ved å bruke denne 
    // formelen. 
    
    // Triplene skriver vi på formen
    //    (p^2 − q^2, 2pq, p^2 + q^2)
    // for forskjellige verdier av p og q.
    // Et pytagoreisk trippel er primitivt dersom 1 er den største felles 
    // faktoren til x, y og z.

    
    // TODO remove when solved
    std::cout << "Problem is not solved yet.\n";
}
