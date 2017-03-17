#include <stdio.h>
#include <math.h>


int reversed(int);
int main(void)
{
    int result = 0;
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            int temp = i * j;
            if ((temp == reversed(temp)) && (temp > result)){
                result = temp;
                printf("%d * %d = %d\n", i, j, result);
            }
        }
    }
    printf("The last = %d\n", result);
}

int reversed(int n)
{
    int reverse = 0;
    while (n != 0)
    {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n = n/10;
    }
    return reverse;
}