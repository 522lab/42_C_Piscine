#include <stdio.h>
#include "ex00/ft_ft.c"

int main(){
    printf("\n----------ex00----------\nExpected:\n42");
    printf("\nOutput:\n");
    int n0;
    int *nbr = &n0;
    ft_ft(nbr);
    printf("%d", n0);
    printf("\n\n");

    return (0);
}
