#include "ft_printf.h"

void validate_hex_ptr(int d, char letter_size)
{
    char c;

    if(d >= 10)
        c = d - 10 + letter_size;
    else
	{
        c = d + '0';
	}
    write(1,&c,1);
}

int ft_hex_len(uintptr_t n, int len)
{
	while(n)
	{
		n = n / 16;
		++len;
	}
	return len;
}

void	ft_put_hex(unsigned int num, const char letter_size)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, letter_size);
		ft_put_hex(num % 16, letter_size);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (letter_size == 'a')
				validate_hex_ptr(num, letter_size);
            if (letter_size == 'A')
				validate_hex_ptr(num, letter_size);
		}
	}
}

int	ft_print_hex(unsigned num, const char format, int len)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
	return (ft_hex_len(num, len));
}