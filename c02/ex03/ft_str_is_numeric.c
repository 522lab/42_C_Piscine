/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:25:48 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/19 19:37:48 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
    printf("%d\n", ft_str_is_numeric("abcd"));
    printf("%d\n", ft_str_is_numeric("1ab2"));
    printf("%d\n", ft_str_is_numeric("123a"));
    printf("%d\n", ft_str_is_numeric(""));
    printf("%d\n", ft_str_is_numeric("1234"));
    printf("%d\n", ft_str_is_numeric("1234567890"));
    return 0;
}
*/