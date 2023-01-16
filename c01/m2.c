#include <stdio.h>
#include "ex02/ft_swap.c"

int main() {

    printf("\n----------ex04----------\nExpected:\n4 2");
    printf("\nOutput:\n");
    int a4 = 14;
    int b4 = 3;
    ft_ultimate_div_mod(&a4, &b4);
    printf("%d %d", a4, b4);
    printf("\n\n");

        return (0);
}
