#include "ft_printf.h"


int ft_print_string(char *str,int len)
{
    int i;
    i = 0;
    if(str == NULL)
    {
        write(1,"(null)",6);
        i = 6;
    }
    else
    {
        while(str[i])
        {
           write(1,&str[i],1);
            ++i;
        }
    }
    return len + i;
}