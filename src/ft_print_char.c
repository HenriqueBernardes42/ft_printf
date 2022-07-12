#include "ft_printf.h"

int ft_print_char(char c,int len)
{
    write(1,&c,1);
    ++len;
    return len;
}