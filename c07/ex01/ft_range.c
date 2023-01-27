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
	i = 0;
	while (min <= max)
	{
		range[i] = min;
		i++;
		min++;
	}
	range[i] = '\0';
	return (range);
}
/*
int	main(void)
{
	int min = 0;
	int max = 0;
	int	size = max - min + 1;
	printf("SIZE: %d\n", size);
	int	*range = ft_range(min, max);
	printf("RANGE: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");
}
 */
