/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:27:40 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/18 13:58:18 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ascii(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_ascii(i / 10 + '0');
			ft_ascii(i % 10 + '0');
			ft_ascii(' ');
			ft_ascii(j / 10 + '0');
			ft_ascii(j % 10 + '0');
			if ((i != 98))
			{
				write(1, ", ", 2);
			}
			i++;
		}
		j++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
