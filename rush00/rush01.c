/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:31:47 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/16 17:53:32 by nsuphasa         ###   ########.fr       */
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
					ft_putchar('/');
				else if ((col == 1 && row == y) || (col == x && row == 1))
					ft_putchar('\\');
				else
					ft_putchar('/');
			}
			else if (col == 1 || col == x || row == 1 || row == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
