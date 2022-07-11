#include "ft_printf.h"
#include "libft.h"


int ft_print_unsigned(unsigned int n,int len)
{
    unsigned int cp;
    unsigned int size;                       
    
    if(n == 0)
    {
        write(1,"0",1);
        return len + 1;
    }
    cp = n;
    size = ft_power_size(n);
    while(size)
    {
        cp = ((n / size) % 10) + '0';
        ++len;
        write(1,&cp,1);
        size /= 10;
    }
    return len;
}