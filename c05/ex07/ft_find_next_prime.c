/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:35:21 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/25 00:35:23 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 0 || nb == 1)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
	i++;
	}
	return (1);
}

int	ft_find_next_prime(int n)
{
	while (1)
	{
		if (ft_is_prime(n))
		{
			return (n);
		}
	n++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	// start from zero
	printf("next prime of 0 = %d\n", ft_find_next_prime(0));
	printf("next prime of 17 = %d\n", ft_find_next_prime(17));
	// max prime for int
	printf("next prime of 2147483647 = %d\n", ft_find_next_prime(2147483647));
	return (0);
}
*/
