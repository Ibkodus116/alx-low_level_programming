#include "main.h"

int print_last_digit(int x)
{
    int f = x % 10;

    if (f < 0){
        _putchar(-f + '0');
        return (-f);

    }else{
        return(_putchar(f + '0'));
    }
}