/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:15:24 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/23 14:15:33 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_d;
	unsigned int	len_s;

	i = ft_strlen(dest);
	j = 0;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size < 1)
		return (len_s + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < len_d)
		return (size + len_s);
	else
		return (len_d + len_s);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	unsigned int size  = 7;
	char dest[] = "abcd";
	char src[] = "efgh";
	printf("%u\n", ft_strlcat(dest, src, size));
	printf("%s\n", dest);
}
*/