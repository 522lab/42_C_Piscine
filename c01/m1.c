#include <stdio.h>
#include "ex01/ft_ultimate_ft.c"

int main(){

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

        return (0);
}
