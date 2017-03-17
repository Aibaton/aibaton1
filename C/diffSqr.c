/*
  Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>
#define MAXVAL 100
int main(void)
{
    unsigned int summSqr = 0;  //Sum of squares
    unsigned int sqrSumm = 0;  //Square of the sum

    for (int i = 1; i <= MAXVAL; i++){
        summSqr += i * i;
        sqrSumm += i;
    }

    sqrSumm = sqrSumm * sqrSumm;
    printf("Difference between %d and %d is %d \n", 
            sqrSumm, summSqr, sqrSumm - summSqr);
    return 0;
}
