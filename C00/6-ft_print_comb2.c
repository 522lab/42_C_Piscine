#include <unistd.h>

void ft_putchar(int number)
{
    // this solution let main function pass type int to this function
    // but it converted to correct ASCII before write to screen
    char ASCII = number + '0';
    write(1, &ASCII, 1);
}

void ft_print_comb2(void)
{   
    int a = 0, b = 1;

    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_putchar((a / 10));
            ft_putchar((a % 10));
            write(1, " ", 1);
            ft_putchar((b / 10));
            ft_putchar((b % 10));
            if (a != 98)
            {
                write(1, ", ", 2);
            }
            b++;
        }
        a++;
    }
}
int main (void)
{
    ft_print_comb2();
    return 0;
}

/*****************************************************************/

// #include <unistd.h>

// void ft_putchar(char ASCII)
// {
//     write(1, &ASCII, 1);
// }

// void ft_print_comb2(void)
// {   
//     int a = 0, b = 1;

//     // loop two variable until reaching target
//     while (a <= 98)
//     {
//         b = a + 1;
//         while (b <= 99)
//         {
//             // this solution convert int to char ASCII before pass to another function
//             ft_putchar((a / 10) + '0');
//             ft_putchar((a % 10) + '0');
//             write(1, " ", 1);
//             ft_putchar((b / 10) + '0');
//             ft_putchar((b % 10) + '0');
//             if (a != 98)
//             {
//                 write(1, ", ", 2);
//             }
//             b++;
//         }
//         a++;
//     }
// }
