/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:15:17 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/23 23:15:20 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	total;

	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power != 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("2^-1 = %d\n", ft_recursive_power(2, -1));
	printf("0^0 = %d\n", ft_recursive_power(0, 0));
	printf("2^3 = %d\n", ft_recursive_power(2, 3));
	return (0);
}
*/