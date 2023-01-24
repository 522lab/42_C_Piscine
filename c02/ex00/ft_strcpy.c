/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:04:42 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/19 18:53:48 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int     main(void)
{
    // copy all source
    // buffer size unchanged
    int buffer = 15;
    char src[] = "abcdefgh";
    char dest1[buffer];
    char dest2[buffer];
    printf("real string: %s\n", strcpy(dest1, src));
    printf("fake string: %s\n", ft_strcpy(dest2, src));
    printf("size: %d\n", sizeof(dest2));
    return 0;
}
*/