/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:37:02 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/16 19:37:09 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	while (++row <= y && (x > 0 && y > 0))
	{
		col = 0;
		while (++col <= x)
		{
			if ((col == 1 || col == x) && (row == 1 || row == y))
			{
				if (col == 1 && row == 1)
					ft_putchar('A');
				else if ((col == 1 && row == y) || (col == x && row == 1))
					ft_putchar('C');
				else
					ft_putchar('A');
			}
			else if (col == 1 || col == x || row == 1 || row == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
