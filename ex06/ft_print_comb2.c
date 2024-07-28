#include <unistd.h>

void    ft_putchar (char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int S1 = 0;
    int S2 = 0;

    while (S1 <= 98)
    {
        S2 = S1 + 1;
        while (S2 <= 99)
    {
    ft_putchar(S1 / 10 + '0');
    ft_putchar(S1 % 10 + '0');
    ft_putchar(' ');
    ft_putchar(S2 / 10 + '0');
    ft_putchar(S2 % 10 + '0');

    if (S1 != 98)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
    S2++;
}
S1++;
}
}