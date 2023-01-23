/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:04:08 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/23 23:04:10 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	total;

	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 0;
	total = 1;
	while (i < power)
	{
		total = total * nb;
		i++;
	}
	return (total);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("2^-1 = %d\n", ft_iterative_power(2, -1));
	printf("0^0 = %d\n", ft_iterative_power(0, 0));
	printf("2^3 = %d\n", ft_iterative_power(2, 3));
	return (0);
}
*/
