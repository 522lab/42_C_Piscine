#include <unistd.h>

void    ft_putchar(char c);

void    rush(int x, int y)
{
        int row = 1;

        while (row <= y && (x > 0 && y > 0)) // within y and not zero matrix?
        {
                int col = 1; // every new row, col start at 1
                while (col <= x) // within x?
                {
                        if (col == 1 || col == x) // left or right?
                        {
                                if (row == 1 || row == y) // top or bot?
                                        ft_putchar('o');
                                else 
                                        ft_putchar('|'); // mid
                        }
                        else if (row == 1 || row == y) // top or bot?
                                ft_putchar('-');
                        else
                                ft_putchar(' '); // inside
                        col++; // next column
                }
                ft_putchar('\n'); // next row
                row++;
        }
}