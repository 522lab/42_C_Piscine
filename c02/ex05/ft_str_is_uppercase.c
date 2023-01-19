/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:43:48 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/19 20:12:32 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
	}
	return (1);
}
// int     main(void)
// {
//     printf("%d\n", ft_str_is_uppercase("abcd"));
//     printf("%d\n", ft_str_is_uppercase("AbcD"));
//     printf("%d\n", ft_str_is_uppercase("ABCd"));
//     printf("%d\n", ft_str_is_uppercase(""));
//     printf("%d\n", ft_str_is_uppercase("ABCD"));
//     printf("%d\n", ft_str_is_uppercase("ABCDEFGH"));
//     return 0;
// }
