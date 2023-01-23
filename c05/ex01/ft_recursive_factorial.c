/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:56:10 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/23 21:56:12 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb -1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("4! = %d\n", ft_recursive_factorial(4));
	printf("0! = %d\n", ft_recursive_factorial(0));
	printf("-1! = %d\n", ft_recursive_factorial(-1));
	return (0);
}
*/