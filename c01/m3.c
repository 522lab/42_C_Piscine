#include <stdio.h>
#include "ex03/ft_div_mod.c"


int main() {

    printf("\n----------ex03----------\nExpected:\n4 2");
    printf("\nOutput:\n");
    int a3 = 14;
    int b3 = 3;
    int div = 0;
    int mod = 0;
    ft_div_mod(a3, b3, &div, &mod);
    printf("%d %d", div, mod);
    printf("\n\n");

    return (0);
}
    