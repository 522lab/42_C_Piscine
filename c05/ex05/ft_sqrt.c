/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:08:56 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/24 00:08:57 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	approx;
	int	last;
	int	diff;

	approx = 1;
	last = 0;
	if (nb < 0)
		return (0);
	while (1)
	{
		last = approx;
		approx = (approx + nb / approx) / 2;
		diff = approx - last;
		if (diff < 0)
			diff = -diff;
		if (diff == 0)
			break ;
	}
	if (approx * approx == nb)
		return (approx);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("sqrt 16 = %d\n", ft_sqrt(16)); // perfect square
	printf("sqrt -16 = %d\n", ft_sqrt(-16)); // negative
	printf("sqrt 17 = %d\n", ft_sqrt(17)); // non-perfect square
	return (0);
}
*/