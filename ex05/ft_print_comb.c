#include <unistd.h>
void ft_print_comb(void)
{
    int s1 = '0';
    int s2;
    int s3;
    while(s1 <= '7')
    {
        s2 = s1 + 1;
        while (s2 <= '8')
        {
            s3 = s2 + 1;
            while (s3 <= '9')
            {
                write(1, &s1, 1);
                write(1, &s2, 1);
                write(1, &s3, 1);
                if (s1 != '7')
                    write(1, ", ", 2);
                s3++;
            }
        s2++;
        }
    s1++;
    }
}