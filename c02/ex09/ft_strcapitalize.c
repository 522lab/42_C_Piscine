/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:06:09 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/19 21:23:02 by nsuphasa         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capital;

	ft_strlowcase(str);
	capital = 1;
	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (capital == 1)
			{
				str[i] -= 32;
				capital = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			capital = 0;
		else
			capital = 1;
	}
	return (str);
}
