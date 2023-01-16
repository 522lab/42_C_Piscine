/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:27:40 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/16 16:59:33 by nsuphasa         ###   ########.fr       */
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
	int	number;

	i = -1 ;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
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
		}
	}
	ft_ascii('\n');
}
