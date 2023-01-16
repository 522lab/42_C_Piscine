#include <stdio.h>
#include "ex05/ft_putstr.c"

int main() {

    printf("\n----------ex05----------\nExpected:\nThis is string from 42.");
    printf("\nOutput:\n");
    char str5[] = "This is string from 42.";
    ft_putstr(str5);
    printf("\n\n");

    return (0);
}
