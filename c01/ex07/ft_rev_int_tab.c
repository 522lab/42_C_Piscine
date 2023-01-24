/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:50:06 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/18 13:03:15 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = tmp;
		i++;
		size--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int a[3] = {2, 2, 5};
	ft_rev_int_tab(a, 3);
	for (int i = 0; i < 3; i++)
	{
		printf("%d", a[i]);
	}
}
*/
