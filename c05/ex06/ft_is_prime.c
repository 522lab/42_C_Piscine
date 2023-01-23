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
	printf("sqrt 16 = %d\n", ft_is_prime(16)); // perfect square
	printf("sqrt -16 = %d\n", ft_is_prime(-16)); // negative
	printf("sqrt 522 = %d\n", ft_is_prime(522)); // non-perfect square
	return (0);
}
*/