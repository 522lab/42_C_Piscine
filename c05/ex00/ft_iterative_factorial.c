/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:47:28 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/23 21:47:29 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	total;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	total = 1;
	while (nb >= 1)
	{
		total = total * nb;
		nb--;
	}
	return (total);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("4! = %d\n", ft_iterative_factorial(4));
	printf("0! = %d\n", ft_iterative_factorial(0));
	printf("-1! = %d\n", ft_iterative_factorial(-1));
	return (0);
}
*/
