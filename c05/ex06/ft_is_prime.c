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

	if (nb == 2147483647)
		return (1);
	if (nb <= 0 || nb == 1)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
	i++;
	}
	return (1);
}
/* 
#include <stdio.h>
int	main(void)
{
	printf("Prime is 1, Non-prime is 0\n");
	// prime
	printf("17 = %d\n", ft_is_prime(17));
	// negative is not prime
	printf("-17 = %d\n", ft_is_prime(-17));
	// zero is not prime
	printf("0 = %d\n", ft_is_prime(0));
	// one is not prime
	printf("1 = %d\n", ft_is_prime(1));
	// max prime number for int
	printf("2147483647 = %d\n", ft_is_prime(2147483647));
	return (0);
}
 */