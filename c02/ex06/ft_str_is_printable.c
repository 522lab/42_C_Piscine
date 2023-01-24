/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:04:59 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/19 20:20:34 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>
int     main(void)
{
    printf("%d\n", ft_str_is_printable("\t"));
    printf("%d\n", ft_str_is_printable("\n"));
    printf("%d\n", ft_str_is_printable("\v"));
    printf("%d\n", ft_str_is_printable(""));
    printf("%d\n", ft_str_is_printable("&*#%^&@#%Y*(#"));
    printf("%d\n", ft_str_is_printable("abcd1234"));
    return 0;
}
*/
