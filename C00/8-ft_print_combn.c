#include <unistd.h>

void    ft_putchar(char c);
void    ft_print_combo(int *combo, int n);

void    ft_print_combn(int n)
{
    int i; // แทนหลักของตัวเลข
    
    int combo[n]; // ลิมิต 9 combo ..ตัวสุดท้ายสำรองให้ \0 NULL Character

    if (n <= 0 || n >= 10) // ออกฟังก์ชั่นนี้ไปเลยถ้าขนาดไม่เข้าเงื่อนไข --> ไปดูโจทย์
        return ;

    i = 0; // ให้เริ่มที่ตำแหน่ง 0

    while (i < n) // เขียน combo
    {
        combo[i] = i;
        i++;
    }

    while (combo[0] <= (10 - n)) //    ลิมิทจำนวน combo โดยอิงจากเลขหน้าของ combo สุดท้าย --> ไปดูโจทย์
    {
        ft_print_combo(combo, n); // ส่ง combo แรกไปเขียน

        combo[n - 1]++; // increment the last element of the array
        i = n;
        while (i > 0 && n > 1) // loop through the array in reverse
        {
            i--;
            if (combo[i] > 9) // check if the current element is greater than 9
            {
                combo[i - 1]++; // if so, increment the previous element
                combo[i] = 0; // and set the current element to 0
            }
        }
    }
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_combo(int *combo, int n)
{
    int i;
    int show;

    show = 1; // เขียน = 1, ไม่เขียน = 0
    i = 0;
    while (i < n - 1) // loop through the array
    {
        if (combo[i] >= combo[i + 1])
            show = 0;
        i++;
    }

    if (show != 1)
        return ;

    i = 0;

    while (i < n)
    {
        ft_putchar(combo[i] + 48); // print the array
        i++;
    }

    if (combo[0] < (10 - n))
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

int main (void)
{
    ft_print_combn(4); // calls ft_print_combn with the parameter 2
}