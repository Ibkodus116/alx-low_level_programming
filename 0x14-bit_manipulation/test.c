#include <stdio.h>
// int len (char *b)
// {
//     unsigned int pow;
//     for (pow = 1; *b != '\0' ; pow*=2, b++);
//         ;
//     pow /= 2;
//     return (pow);

// };
int main()
{
    char *b;
    b = "1010";
    unsigned int j = 48, sNum = 0, tNum = 0, count, lent, fNum, i = 4, t = 1, len, pow = 1;

    // while (*b != '\0')
    // {
    //     pow *=2;
    //     b++;
    // }

    // for (pow = 1; *b != '\0' ; pow*=2, b++)
    // for (pow = 1; pow < 4 ; t *= 2, pow++)
        // ;

    // pow /= 2;
    for (len = 0; b[len] != '\0' ; len++)
    {
        pow *= 2;
    }
        ;
    pow /= 2;
    printf("pow is %u\n len is %d\n", pow, len);


    while (*b != '\0')
    {
        if (*b == '0' || *b == '1')
        {
            sNum = *b - j;

            fNum = fNum + (pow * sNum);
            pow /= 2;
            // printf("B2 is %u\n", fNum);

            if (count < 1){
                tNum = sNum * 10;
            }
            if (count == 1)
            {
                tNum += sNum;
            }if (count > 1)
            {
                tNum = (tNum * 10) + sNum;
            }

        }else
        {
            return (0);
        }
        count++;
        b++;
    }

    printf("B2 is %u\n", fNum);
    // printf("count is %u\n", count);


    // unsigned int q, z;

    // do
    // {
    //     z = tNum % 10;
    //     tNum = tNum / 10;


    // printf("_______________\n");
    // printf("REM is: %u\n", z);
    // }
    // while (tNum != 0);


    return sNum;
}
