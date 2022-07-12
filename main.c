#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include "src/ft_printf.h"
// #include "./printf/src/ft_printf.c"


// int ft_printf(const char* str, ...);
// int conditionals(va_list list, char c, int len);

int main()
{
    char *str;
    int retorno;

    // puts("*****************original*****************");
    
    // printf("**-decimal_positivo 78756 == %d\n", 78756);
    ft_printf("$$-decimal_positivo 78756 == %d\n", 98754);
    printf("**-decimal_positivo 78756 == %d\t566 == %d\t8 == %d\n", 78756, 566, 8);
    ft_printf("$$-decimal_positivo 78756 == %d\t566 == %d\t8 == %d\n", 78756, 566, 8);
    printf("**-decimal_negaivo -8654 = %d\n", -8654);
    ft_printf("$$-decimal_negaivo -8654 = %d\n", -8654);
    printf("**-string 'pokemon' == %s\n", "pokemon");
    ft_printf("$$-string 'pokemon' == %s\n", "pokemon");
    printf("char **-c == %c\n", 'c');
    ft_printf("$$-char c == %c\n", 'c');
    printf("**-base10 87 == %i\n", 87);
    ft_printf("$$-base10 87 == %i\n", 87);
    printf("**-decimal_unsigned 4294967295 = %u\n",(unsigned int) UINT_MAX - 3);
    ft_printf("$$-decimal_unsigned 4294967295 = %u\n",(unsigned int) UINT_MAX - 3);
    printf("**-decimal_unsigned -98 = %u\n", -98);
    ft_printf("$$-decimal_unsigned -98 = %u\n", -98);
    printf("**-hexadecimal_low 5645654 = %x\n", 5645654);
    ft_printf("$$-hexadecimal_low 5645654 = %x\n", 5645654);
    printf("**-hexadecimal_low 9875 = %x\n", 9875);
    ft_printf("$$-hexadecimal_low 9875 = %x\n", 9875);
    printf("**-hexadecimal_low 12453587 = %x\n", 12453587);
    ft_printf("$$-hexadecimal_low 12453587 = %x\n", 12453587);
    printf("**-hexadecimal_low 453 = %x\n", 453);
    ft_printf("$$-hexadecimal_low 453 = %x\n", 453);
    printf("**-hexadecimal_upper 42 = %X\n", 42);
    ft_printf("$$-hexadecimal_upper 42 = %X\n", 42);
    printf("**-hexadecimal_upper 9875 = %X\n", 9875);
    ft_printf("$$-hexadecimal_upper 9875 = %X\n", 9875);
    printf("**-hexadecimal_upper 12453587 = %X\n", 12453587);
    ft_printf("$$-hexadecimal_upper 12453587 = %X\n", 12453587);
    printf("**-hexadecimal_upper 453 = %X\n", 453);
    ft_printf("$$-hexadecimal_upper 453 = %X\n", 453);
    printf("**-percentage == %%%%%%%%\n");
    ft_printf("$$-percentage == %%%%%%%%\n");
    printf("**-adress = %p\n", &str);
    ft_printf("$$-adress = %p\n", &str);
    
    
    puts("*****************tests*****************");
    // retorno = ft_printf("1, 2, 3, -d test, testing, 0.4s sound, 1, 2, 3xp, sound, -*dtest\n");
    // ft_printf("%c\n", 'a');
    // puts("*****************- 2 -*****************");
    // retorno = ft_printf("%c", 'a');
    // puts("*****************- 3 -*****************");
    // ft_printf("%c%c%c*", '\0', '1', 1);
    // puts("*****************- 4 -*****************");
    // retorno = ft_printf("%c small string", 'a');
    // puts("*****************- 6 -*****************");
    // ft_printf("the char is: %c", 'a');
    // puts("*****************- 9 -*****************");
    // ft_printf("%c%c%c%c%c", 'a', 'i', 'u', 'e', 'o');
    // puts("*****************- 13 -*****************");
    // retorno = ft_printf("%s", "test");
    // puts("*****************- 14 -*****************");
    // retorno = ft_printf("this is 1 %s with %s %s", "test", "multiple", "strings");
    // puts("*****************- 14 -*****************");
    retorno = ft_printf("%p", &str);
    printf("\nretorno == %d\n", retorno);
   return 0;
}