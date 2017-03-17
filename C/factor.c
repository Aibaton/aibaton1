#include <stdio.h>
#include <math.h>

#define NUM 600851475143 

int main(void)
{
    int max = 0;
    for(int i = 1; i < 100000; i++)
    {
        short checker = 0;
        for (int j = 2; j*j < i; j++)
        {
            if (i%j == 0){
                checker = 1;
                break;
            }
        }
        if ((NUM%i == 0) && (checker == 0)){
            max = i;
        }
    }
    printf("%d\n", max);
}