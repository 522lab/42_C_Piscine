#include <stdio.h>
#include "ex00/ft_strcpy.c"
// #include "ex01/ft_strncpy.c"

int main (void)
{
    printf("\n----------ex00----------\nExpected:\n24 42\n");
    printf("\nOutput:\n");
    char src[] = "24 42";
    char dest[6];
    ft_strcpy(dest, src);

    printf("%s", dest);
    printf("\n\n");

    // printf("\n----------ex01----------\nExpected:\nThis is 42\n");
    // printf("\nOutput:\n");
    // char src2[] = "This is 42ABC";
    // char dest2[14];
    // ft_strncpy(dest2, src2, 10);
    // printf("%s", dest2);
    // printf("\n\n");
}
