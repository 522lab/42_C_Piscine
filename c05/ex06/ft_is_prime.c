/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:08:56 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/24 00:08:57 by nsuphasa         ###   ########.fr       */
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
			break ;
	}
	i++;
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("Prime is 1, Non-prime is 0\n");
	printf("17 is = %d\n", ft_is_prime(17)); // prime
	printf("0 = %d\n", ft_is_prime(0)); // zero is not prime
	printf("1 = %d\n", ft_is_prime(1)); // one is not prime
	return (0);
}
*/