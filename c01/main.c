#include <stdio.h>

#include "ex02/ft_swap.c"

int main() {


    printf("\n----------ex02----------\nExpected:\n44 22");
    printf("\nOutput:\n");
    int a2 = 22;
    int b2 = 44;
    ft_swap(&a2, &b2);
    printf("%d %d", a2, b2);
    printf("\n\n");



        return (0);    
}
