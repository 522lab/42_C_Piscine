// include header file for "write" function
#include <unistd.h>

// function name "ft_putchar"
// it return (void)
// it takes parameter of char type (char c)
void    ft_putchar(char c)
{
	// 1 = file descriptor, '1' means standard output
    // &c = take address of variable 'c'
    // 1 = length in bytes
    write(1, &c, 1);
}

// just to check the output, excluded from turn-in file
int main (void)
{
    // call the function passing an argument of character 'a'
    ft_putchar('a');
    // crash prevention
    return 0;
}