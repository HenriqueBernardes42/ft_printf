#include "ft_printf.h"
#include "libft.h"

int ft_put_ptr(uintptr_t num, int len)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16, len);
		ft_put_ptr(num % 16, len);
	}
	else
	{
		if (num <= 9)
			validate_hex_ptr(num, 'a');
		else
			validate_hex_ptr(num, 'a');
	}
	return len;
}

int	ft_print_ptr(unsigned long long ptr, int len)
{
	if(ptr == 0)
	{
		len += write(1,"(nil)",5);
		return len;
	}
	len += write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1);
	else
		ft_put_ptr(ptr, len);
	return (ft_hex_len(ptr,len));
}