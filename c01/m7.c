#include <stdio.h>
#include "ex07/ft_rev_int_tab.c"

int main() {

    printf("\n----------ex07----------\nExpected:\n54321");
    printf("\nOutput:\n");
    int jj;
        int tab[5] = {1,2,3,4,5};
    ft_rev_int_tab(tab, 5);
    for (jj=0; jj<5; jj++)
    {
        printf("%d", tab[jj]);
    }
    printf("\n\n");
    
    return(0);
}
