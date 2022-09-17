#include <stdio.h>

int main (void)
{
    long int n1, i, n2, n3;
    n1 = 0;
    n2 = 1;

    for (i = 2; i <= 91; ++i)
    {
        n3= n1 + n2;
        printf("%ld", n3);
        n1 = n2;
        n2 = n3;

        if (i != 91)
        {
            printf(", ");
        }
    }
        printf("\n");
    return(0);
}
