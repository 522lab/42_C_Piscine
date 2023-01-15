#include <unistd.h>

void ft_print_comb(void)
{   
    char a = '0', b, c;
    // loop first digit
    while (a <= '7')
    {
        b = a + 1;
        // loop second digit
        while (b <= '8')
        {
            c = b + 1;
            // loop third digit
            while (c <= '9')
            {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                if (a !='7')
                {
                    write(1, ", ", 2);
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

int main (void)
{
    ft_print_comb();
    return 0;
}