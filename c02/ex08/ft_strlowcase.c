/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:53:54 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/19 20:55:55 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
	return (str);
}
// int     main(void)
// {
//     char str[] = "aB12DefASFJKUcs%$fgH";
//     printf("%s\n", ft_strlowcase(str));

//     return 0;
// }
