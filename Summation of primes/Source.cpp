#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a,b,c=0;
    printf("the sum of all the primes below ");
    scanf("%d", &b);
    for (a = 1; a <= b; a++) 
    {

        if ((a == 1 || a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 7 == 0)
            && (a != 2 && a != 3 && a != 5 && a != 7)) 
        {
            continue;
            
        }
        c += a;
        //printf(" %d ", a);
    }
    printf("\nis %d ", c);
    printf("\n\n");
	return 0;
}