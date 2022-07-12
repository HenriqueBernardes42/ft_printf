#include "ft_printf.h"

int ft_print_int(int n,int len)
{
    char *num;
    int     i;

    i = 0;
    num = ft_itoa(n);
	if (num == NULL)
	{
		write(1,"(null)",1);
		return (len + 6);
	}
	while (num[i])
	{
		write(1, &num[i], 1);
		i++;
	}
    free(num);
    return len + i;
}