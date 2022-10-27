#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 *
 *int main(void)
 *{
 *    unsigned int n;
 *
 *
 *    n = binary_to_uint("1");
 *    printf("%u\n", n);
 *    n = binary_to_uint(NULL);
 *    printf("%u\n", n);
 *    n = binary_to_uint("1e01");
 *    printf("%u\n", n);
 *    n = binary_to_uint("1100010");
 *    printf("%u\n", n);
 *    n = binary_to_uint("0000000000000000000110010010");
 *    printf("%u\n", n);
 *
 *    return (0);
 *}
 *
*
*int main(void)
*{
*    print_binary(0);
*    printf("\n");
*    print_binary(1);
*    printf("\n");
*    print_binary(98);
*    printf("\n");
*    print_binary(1024);
*    printf("\n");
*    print_binary((1 << 10) + 1);
*    printf("\n");
*    return (0);
*}
*/
int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return (0);
}