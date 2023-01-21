/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:03:38 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/21 19:03:40 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	while (dest[++i])
	j = 0;
	while (src[j])
	{
		if (i == size - 1)
		{
			while (dest[i] != '\0')
			{
				dest[i] = '\0';
				i++;
				j++;
			}
			return (i);
		}
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}
