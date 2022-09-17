#include <stdio.h>

int main (void)
{
    int n1, i, n2, n3, sum;
    n1 = 0;
    n2 = 1;

        /*
        printf("%ld, %ld, ", n1, n2);
        */

    for (i = 2; i < 12; ++i)
    {
        n3= n1 + n2;

        /*
        printf("%d", n3);
        */
       if (n3 % 2 ==0)
       {
        sum += n3;
        printf("%d, ", sum);
       }
        n1 = n2;
        n2 = n3;
       /*
        if (i != 11)
        {
            printf(", ");
        }
        */
    }
        printf("\n");
        printf("%d", sum);
        printf("\n");
    return(0);
}
