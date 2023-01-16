/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:47:11 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/16 17:56:55 by nsuphasa         ###   ########.fr       */
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
			if (col == 1 || col == x)
			{
				if (row == 1)
					ft_putchar('A');
				else if (row == y)
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else if (row == 1 || row == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
