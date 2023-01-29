/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:39:05 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/28 16:39:08 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	i = -1;
	while (++i < size)
		(*range)[i] = min + i;
	return (size);
}
int main(void)
{
//     int min = 1;
//     int max = 3;
//     int *range;
//     int size = ft_ultimate_range(&range, min, max);
//     printf("RANGE: ");
// 	int	i;
//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", range[i]);
//     }
//     printf("\n");
//     printf("SIZE: %d\n", size);
//     free(range);

	char s1[] = "a";
	char s2[] = "a";
	char s3[] = "a";
	char s4[] = "a";
	strcat
    return 0;
}

/* int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min + 1;
	*range = malloc(sizeof(int) * size);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!*range)
		return (-1);
	i = -1;
	while (++i < size)
		(*range)[i] = min + i;
	return (size);
} */