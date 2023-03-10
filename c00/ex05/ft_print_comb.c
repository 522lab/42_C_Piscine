/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:54:53 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/13 22:30:08 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i +1;
		while (j <= '8')
		{
			k = j +1;
			while (k <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				k++;
				if (i == '7' && j == '8')
					continue ;
				write(2, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}
*/
