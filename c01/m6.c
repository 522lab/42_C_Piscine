#include <stdio.h>
#include "ex06/ft_strlen.c"


int main() {

    printf("\n----------ex06----------\nExpected:\n42");
    printf("\nOutput:\n");
    char str6[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int result;
    result = ft_strlen(str6);
    printf("%d", result);
    printf("\n\n");

    return (0);
}
