#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>
#include <stdlib.h>

int ft_printf(const char *str, ...);
int ft_print_int(int n,int len);
int ft_print_unsigned(unsigned int n,int len);
int ft_print_char(char c,int len);
int	ft_print_hex(unsigned num, const char format, int len);
int ft_print_string(char *str,int len);
int	ft_print_ptr(unsigned long long ptr, int len);
int ft_print_module(int len);

void validate_hex_ptr(int d, char letter_size);
int ft_hex_len(uintptr_t n, int len);

char	*ft_itoa(int n);


#endif