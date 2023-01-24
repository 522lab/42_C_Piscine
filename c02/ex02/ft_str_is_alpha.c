/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:39:35 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/19 19:34:21 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>
#include <string.h>
int     main(void)
{
    printf("%d\n", ft_str_is_alpha("1234"));
    printf("%d\n", ft_str_is_alpha("a12d"));
    printf("%d\n", ft_str_is_alpha("abc1"));
    printf("%d\n", ft_str_is_alpha(""));
    printf("%d\n", ft_str_is_alpha("AbcD"));
    printf("%d\n", ft_str_is_alpha("abcd"));
    return 0;
}
*/
