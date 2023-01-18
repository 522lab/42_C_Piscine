#include <stdio.h>
#include "ex08/ft_sort_int_tab.c"

int main() {

    printf("\n----------ex08----------\nExpected:\n01269");
    printf("\nOutput:\n");
    int kk;
        int tab_[5] = {6,2,9,0,1};
    ft_sort_int_tab(tab_, 5);
    for (kk=0; kk<5; kk++)
    {
        printf("%d", tab_[kk]);
    }
    printf("\n\n");

    return(0);
}
