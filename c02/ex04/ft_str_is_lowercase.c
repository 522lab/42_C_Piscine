/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:41:32 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/19 20:08:18 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
	}
	return (1);
}
// int     main(void)
// {
//     printf("%d\n", ft_str_is_lowercase("ABCD"));
//     printf("%d\n", ft_str_is_lowercase("aBCd"));
//     printf("%d\n", ft_str_is_lowercase("abcD"));
//     printf("%d\n", ft_str_is_lowercase(""));
//     printf("%d\n", ft_str_is_lowercase("abcd"));
//     printf("%d\n", ft_str_is_lowercase("abcdefgh"));
//     return 0;
// }
