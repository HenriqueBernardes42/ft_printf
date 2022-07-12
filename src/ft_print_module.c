#include "ft_printf.h"

int ft_print_module(int len)
{
    ++len;
    write(1,"%%",1);
    return len;
}