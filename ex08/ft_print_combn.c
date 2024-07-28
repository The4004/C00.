#include <unistd.h>
void ft_print_combn(int n)
{
    if (n == 1)
    {
    int s1 = '0';
 
        while (s1 <= '9')
        {
                write(1, &s1, 1);
                if (s1 != '9')
                    write(1, ", ", 2);
        s1++;
        }
    s1++;
    }
    if (n == 2)
    {
    int s1 = '0';
    int s2;
    while(s1 <= '8')
    {
        s2 = s1 + 1;
        while (s2 <= '9')
        {
                write(1, &s1, 1);
                write(1, &s2, 1);
                if (s1 != '8')
                    write(1, ", ", 2);
        s2++;
        }
    s1++;
    }
    }
    if (n == 3)
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
    if (n == 4)
    {
    int s1 = '0';
    int s2;
    int s3, s4;
    while(s1 <= '6')
    {
        s2 = s1 + 1;
        while (s2 <= '7')
        {
            s3 = s2 + 1;
            while (s3 <= '8')
            {
                s4 = s3 + 1;
                while(s4 <= '9')
                {
                write(1, &s1, 1);
                write(1, &s2, 1);
                write(1, &s3, 1);
                write(1, &s4, 1);
                if (s1 != '6')
                    write(1, ", ", 2);
                s4++;
                }
            s3++;
            }
        s2++;
        }
    s1++;
    }
    }
    if (n == 5)
    {
    int s1 = '0';
    int s2;
    int s3, s4, s5;
    while(s1 <= '5')
    {
        s2 = s1 + 1;
        while (s2 <= '6')
        {
            s3 = s2 + 1;
            while (s3 <= '7')
            {
                s4 = s3 + 1;
                while(s4 <= '8')
                {
                    s5 = s4 + 1;
                    while(s5 <= '9')
                    {
                    write(1, &s1, 1);
                    write(1, &s2, 1);
                    write(1, &s3, 1);
                    write(1, &s4, 1);
                    write(1, &s5, 1);
                    if (s1 != '5')
                        write(1, ", ", 2);
                    s5++;
                    }
                s4++;
                }
            s3++;
            }
        s2++;
        }
    s1++;
    }
    }         
    if (n == 6)
    {
    int s1 = '0';
    int s2;
    int s3, s4, s5, s6;
    while(s1 <= '4')
    {
        s2 = s1 + 1;
        while (s2 <= '5')
        {
            s3 = s2 + 1;
            while (s3 <= '6')
            {
                s4 = s3 + 1;
                while(s4 <= '7')
                {
                    s5 = s4 + 1;
                    while(s5 <= '8')
                    {
                        s6 = s5 + 1;
                        while(s6 <= '9')
                        {
                            write(1, &s1, 1);
                            write(1, &s2, 1);
                            write(1, &s3, 1);
                            write(1, &s4, 1);
                            write(1, &s5, 1);
                            write(1, &s6, 1);
                             if (s1 != '4')
                                write(1, ", ", 2);
                        s6++;
                        }
                    s5++;
                    }
                s4++;
                }
            s3++;
            }
        s2++;
        }
    s1++;
    }
}
    if (n == 7)
    {
    int s1 = '0';
    int s2;
    int s3, s4, s5, s6, s7;
    while(s1 <= '3')
    {
        s2 = s1 + 1;
        while (s2 <= '4')
        {
            s3 = s2 + 1;
            while (s3 <= '5')
            {
                s4 = s3 + 1;
                while(s4 <= '6')
                {
                    s5 = s4 + 1;
                    while(s5 <= '7')
                    {
                        s6 = s5 + 1;
                        while(s6 <= '8')
                        {
                            s7 = s6 + 1;
                            while(s7 <= '9')
                            {
                            write(1, &s1, 1);
                            write(1, &s2, 1);
                            write(1, &s3, 1);
                            write(1, &s4, 1);
                            write(1, &s5, 1);
                            write(1, &s6, 1);
                            write(1, &s7, 1);
                             if (s1 != '3')
                                write(1, ", ", 2);
                            s7++;
                            }
                        s6++;
                        }
                    s5++;
                    }
                s4++;
                }
            s3++;
            }
        s2++;
        }
    s1++;
    }
    }
    if (n == 8)
    {
    int s1 = '0';
    int s2;
    int s3, s4, s5, s6, s7, s8;
    while(s1 <= '2')
    {
        s2 = s1 + 1;
        while (s2 <= '3')
        {
            s3 = s2 + 1;
            while (s3 <= '4')
            {
                s4 = s3 + 1;
                while(s4 <= '5')
                {
                    s5 = s4 + 1;
                    while(s5 <= '6')
                    {
                        s6 = s5 + 1;
                        while(s6 <= '7')
                        {
                            s7 = s6 + 1;
                            while(s7 <= '8')
                            {
                                s8 = s7 + 1;
                                while(s8 <= '9')
                                {
                               write(1, &s1, 1);
                                write(1, &s2, 1);
                                write(1, &s3, 1);
                                write(1, &s4, 1);
                                write(1, &s5, 1);
                                write(1, &s6, 1);
                                write(1, &s7, 1);
                                write(1, &s8, 1);
                                 if (s1 != '2')
                                    write(1, ", ", 2);
                                s8++;
                                }
                            s7++;
                            }
                        s6++;
                        }
                    s5++;
                    }
                s4++;
                }
            s3++;
            }
        s2++;
        }
    s1++;
    }
    }
    if (n == 9)
    {
    int s1 = '0';
    int s2;
    int s3, s4, s5, s6, s7, s8, s9;
    while(s1 <= '1')
    {
        s2 = s1 + 1;
        while (s2 <= '2')
        {
            s3 = s2 + 1;
            while (s3 <= '3')
            {
                s4 = s3 + 1;
                while(s4 <= '4')
                {
                    s5 = s4 + 1;
                    while(s5 <= '5')
                    {
                        s6 = s5 + 1;
                        while(s6 <= '6')
                        {
                            s7 = s6 + 1;
                            while(s7 <= '7')
                            {
                                s8 = s7 + 1;
                                while(s8 <= '8')
                                {
                                    s9 = s8 + 1;
                                    while(s9 <= '9')
                                    {
                                        write(1, &s1, 1);
                                        write(1, &s2, 1);
                                        write(1, &s3, 1);
                                        write(1, &s4, 1);
                                        write(1, &s5, 1);
                                        write(1, &s6, 1);
                                        write(1, &s7, 1);
                                        write(1, &s8, 1);
                                        write(1, &s9, 1);
                                        if ( s1 != '1')
                                            write(1, ", ", 2);
                                    s9++;
                                    }
                                s8++;
                                }
                            s7++;
                            }
                        s6++;
                        }
                    s5++;
                    }
                s4++;
                }
            s3++;
            }
        s2++;
        }
    s1++;
    }
    }
}