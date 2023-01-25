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
	// 0 & 1 aren't prime
	if (nb == 0 || nb == 1)
		return (0);
	// 2 is smallest prime
	i = 2;
	/* checking up to nb / 2 is enough because if it's divisible, 
	it will already be divided by smaller number */
	while (i <= nb / 2)
	{
		// loop to find it's diviser
		if (nb % i == 0)
			return (0);
	i++;
	}
	// not divisible, it's prime
	return (1);
}

#include <stdio.h>
int	main(void)
{
	printf("Prime is 1, Non-prime is 0\n");
	// prime
	printf("17 is = %d\n", ft_is_prime(17));
	// zero isn't prime
	printf("0 = %d\n", ft_is_prime(0));
	// one isn't prime
	printf("1 = %d\n", ft_is_prime(1));
	// max prime number for int
	printf("2147483647 = %d\n", ft_is_prime(2147483647));
	return (0);
}
