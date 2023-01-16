/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:20:32 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/16 17:28:17 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y && (x > 0 && y > 0))
	{
		col = 1;
		while (col <= x)
		{
			if (col == 1 || col == x)
			{
				if (row == 1 || row == y)
					ft_putchar('o');
				else
					ft_putchar('|');
			}
			else if (row == 1 || row == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
