#include "ft_printf.h"
#include "libft.h"

int ft_print_char(char c,int len)
{
    write(1,&c,1);
    ++len;
    return len;
}