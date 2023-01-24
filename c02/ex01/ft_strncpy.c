/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:00:54 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/19 20:48:30 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int     main(void)
{
    // copy all source OR buffer
    // buffer size unchanged
    // buffer too small ==> overflow
    unsigned int buffer = 4;
    char src[] = "abcdefgh";
    char dest1[buffer];
    char dest2[buffer];
    strncpy(dest1, src, buffer);
    printf("real string: %s\n", dest1);
    ft_strncpy(dest2, src, buffer);
    printf("fake string: %s\n", dest2);
    return 0;
}
*/