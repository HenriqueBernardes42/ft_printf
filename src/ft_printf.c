#include "ft_printf.h"
#include <stdio.h>


int conditionals(va_list list, char c, int len)
{

    if(c == 's')
        len = ft_print_string(va_arg(list,char*), len);
    else if(c == 'd' || c == 'i')
        len = ft_print_int(va_arg(list,int), len);
    else if(c == 'u')
        len = ft_print_unsigned(va_arg(list,unsigned int), len);
    else if(c == 'c')
        len = ft_print_char(va_arg(list, int), len);
    else if(c == 'x')
        len = ft_print_hex(va_arg(list,int), 'a', len);
    else if(c == 'X')
        len = ft_print_hex(va_arg(list,int), 'A', len);
    else if(c == '%')
        len = ft_print_module(len);
    else if(c == 'p')
        len = ft_print_ptr(va_arg(list,unsigned long long), len);
    return len;
} 

int ft_printf(const char* str, ...)
{
    va_list list;
    int     i;
    int     len;

    va_start(list,str);
    i = 0;
    len = 0;
    while (str[i])
    {
        while(str[i] == '%')
        {
            len = conditionals(list, str[i + 1], len);
            i = i+2;
            if(str[i] == '\0')
                return len;
        }
        ++len;
        write(1,&str[i],1);
        ++i;
    }
    va_end(list);
    return len;
}