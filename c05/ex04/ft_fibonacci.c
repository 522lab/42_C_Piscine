/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:49:26 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/23 23:49:30 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("Fn -4 = %d\n", ft_fibonacci(-4));
	printf("Fn 2 = %d\n", ft_fibonacci(2));
	printf("Fn 0 = %d\n", ft_fibonacci(0));
	return (0);
}
*/