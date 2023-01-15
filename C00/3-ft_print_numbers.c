#include <unistd.h>

void ft_print_numbers(void)
{
    // loop with char
    char number = '0';
    
    while (number <= '9')
    {
        write(1, &number, 1);
        number++;
    }
}

int main (void)
{
    ft_print_numbers();
    return 0;
}

/*************************/

#include <unistd.h>

void ft_print_numbers(void)
{
    // loop int in ASCII
    int number = 48;
    
    while (number <= 57)
    {
        write(1, &number, 1);
        number++;
    }
}

int main (void)
{
    ft_print_numbers();
    return 0;
}