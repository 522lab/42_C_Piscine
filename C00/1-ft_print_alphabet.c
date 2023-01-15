#include <unistd.h>

void ft_print_alphabet(void)
{
    // loop char
    char letter = 'a';

    while (letter <= 'z')
    {
        write(1, &letter, 1);
        letter++;
    }
}

int main (void)
{
    ft_print_alphabet();
    return 0;
}

/***********************************/

#include <unistd.h>

void ft_print_alphabet(void)

{
    // loop int in ASCII
    int letter = 97;

    while (letter <= 122)
    {
        write(1, &letter, 1);
        letter++;
    }
}

int main (void)
{
    ft_print_alphabet();
    return 0;
}