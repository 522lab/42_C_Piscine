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
#include <stdio.h>
#include <string.h>

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
// int     main(void)
// {
//     // Imposter concept...
//     // I have null terminator.
//     // I care buffer and I care src.
//     unsigned int buffer = 15;
//     // real
//     char src1[] = "abcdefgh";
//     char dest1[buffer];
//     printf("---strncpy (real)---\n");
//     strncpy(dest1, src1, buffer);
//     printf("string: %s\n", dest1);
//     printf("size: %ld\n", sizeof(dest1));
//     // imposter
//     char src2[] = "abcdefgh";
//     char dest2[buffer];
//     printf("\n---ft_strncpy (imposter)---\n");
//     ft_strncpy(dest2, src2, buffer);
//     printf("string: %s\n", dest2);
//     printf("size: %ld\n", sizeof(dest2));
//     return 0;
// }
