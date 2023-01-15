#include <unistd.h>

void    ft_putchar(char c);

void    rush(int x, int y)
{
        int row = 1;

        while (row <= y && (x > 0 && y > 0)) // within y and not zero matrix
        {
                int col = 1; // every new row, col start at 1
                while (col <= x) // within x
                {
                        if ((col == 1 || col == x) && (row == 1 || row == y)) // corner
                        {
                                if (col == 1 && row == 1)
                                        ft_putchar('A'); // top left
                                else if ((col == 1 && row == y) || (col == x && row == 1))
                                        ft_putchar('C'); // bot left or top right
                                else
                                        ft_putchar('A'); // bot right
                        }
                        else if (col == 1 || col == x || row == 1 || row == y) // border
                                ft_putchar('B'); // border
                        else
                                ft_putchar(' '); // inside
                        col++; // next column
                }
                ft_putchar('\n'); // next row
                row++;
        }
}