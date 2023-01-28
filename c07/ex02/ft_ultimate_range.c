#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min + 1;
	*range = malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	i = -1;
	while (++i < size)
		(*range)[i] = min + i;
	return (size);
}

/* int main(void)
{
    int min = -2;
    int max = 4;
    int *range;
    int size = ft_ultimate_range(&range, min, max);
    printf("RANGE: ");
	int	i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");
    printf("SIZE: %d\n", size);
    free(range);
    return 0;
}
 */
