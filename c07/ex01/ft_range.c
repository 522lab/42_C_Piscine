#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min + 1;
	range = malloc(sizeof(int) * (size));
	if (!range)
		return (NULL);
	i = -1;
	while (++i < size)
		range[i] = min + i;
	range[i] = '\0';
	return (range);
}
/*
int	main(void)
{
	int min = -2;
	int max = 4;
	int	*range = ft_range(min, max);
	printf("RANGE: ");
    int i;
	for (i = 0; i < max - min + 1; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");
	printf("SIZE: %d\n", i);
    free(range);
    return (0);
}
 */
