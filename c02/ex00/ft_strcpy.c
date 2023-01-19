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
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
// int     main(void)
// {
//     // Imposter concept...
//     // I have null terminator.
//     // I don't care buffer, I care src.
//     int buffer = 15;
//     // real
//     char src1[] = "abcdefgh";
//     char dest1[buffer];
//     printf("---strcpy (real)---\n");
//     strcpy(dest1, src1);
//     printf("string: %s\n", dest1);
//     printf("size: %ld\n", sizeof(dest1));
//     // imposter
//     char src2[] = "abcdefgh";
//     char dest2[buffer];
//     printf("\n---ft_strcpy (imposter)---\n");
//     ft_strcpy(dest2, src2);
//     printf("string: %s\n", dest2);
//     printf("size: %ld\n", sizeof(dest2));
//     return 0;
// }
