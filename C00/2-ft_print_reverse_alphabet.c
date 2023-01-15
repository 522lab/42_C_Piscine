#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    // loop char
    char letter = 'z';

    while (letter >= 'a')
    {
        write(1, &letter, 1);
        letter--;
    }
}

int main (void)
{
    ft_print_reverse_alphabet();
    return 0;
}

/***********************************/

#include <unistd.h>

void ft_print_reverse_alphabet(void)

{
    // loop int in ASCII
    int letter = 122;

    while (letter >= 97)
    {
        write(1, &letter, 1);
        letter--;
    }
}

int main (void)
{
    ft_print_reverse_alphabet();
    return 0;
}