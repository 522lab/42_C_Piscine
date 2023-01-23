/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:02:46 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/23 14:03:05 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	i++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>
int main(void)
{
    char s1[] = "test" ;
    char s2[] = "test";
    int a = ft_strcmp(s1,s2);
    int b = strcmp(s1,s2);
    printf("strcmp : %d \n",b);
    printf("ft_strcmp : %d \n",a);
    return 0;
}
*/
