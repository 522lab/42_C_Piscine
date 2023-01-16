#include <stdio.h>
#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"


int main() {
    printf("\n----------ex00----------\nExpected:\n42");
    printf("\nOutput:\n");
    int n0;
    int *nbr = &n0;
    ft_ft(nbr);
    printf("%d", n0);
    printf("\n\n");

    printf("\n----------ex01----------\nExpected:\n42");
    printf("\nOutput:\n");
    int n1;
           int *ptr1 = &n1;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;
    int *********ptr9 = &ptr8;
    ft_ultimate_ft(ptr9);
    printf("%d", n1);
    printf("\n\n");

    printf("\n----------ex02----------\nExpected:\n44 22");
    printf("\nOutput:\n");
    int a2 = 22;
    int b2 = 44;
    ft_swap(&a2, &b2);
    printf("%d %d", a2, b2);
    printf("\n\n");

    printf("\n----------ex03----------\nExpected:\n4 2");
    printf("\nOutput:\n");
    int a3 = 14;
    int b3 = 3;
    int div = 0;
    int mod = 0;
    ft_div_mod(a3, b3, &div, &mod);
    printf("%d %d", div, mod);
    printf("\n\n");

    printf("\n----------ex04----------\nExpected:\n4 2");
    printf("\nOutput:\n");
    int a4 = 14;
    int b4 = 3;
    ft_ultimate_div_mod(&a4, &b4);
    printf("%d %d", a4, b4);
    printf("\n\n");

    printf("\n----------ex05----------\nExpected:\nThis is string from 42.");
    printf("\nOutput:\n");
    char str5[] = "This is string from 42.";
    ft_putstr(str5);
    printf("\n\n");


    printf("\n----------ex06----------\nExpected:\n42");
    printf("\nOutput:\n");
    char str6[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int result;
    result = ft_strlen(str6);
    printf("%d", result);
    printf("\n\n");

        return (0);
}
