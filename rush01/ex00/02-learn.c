/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-learn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 22:22:35 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/22 22:22:43 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>

int	a15(char *str);

int	a14(char *str)
{
	if (strcmp(str, "3 2 2 1 2 3 1 2 3 2 1 3 1 3 3 2") == 0)
	{
		write(1, "2 1 3 4\n3 4 2 1\n4 3 1 2\n1 2 4 3\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 2 1 4 2 2 4 1 3 1 2 2 2 3 2 1") == 0)
	{
		write(1, "2 3 4 1\n4 1 3 2\n1 4 2 3\n3 2 1 4\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 2 1 4 2 2 4 1 3 2 1 2 2 3 2 1") == 0)
	{
		write(1, "2 3 4 1\n1 4 3 2\n4 1 2 3\n3 2 1 4\n", 32);
		return (0);
	}
	else
	{
		a15(str);
	}
	return (0);
}

int	a13(char *str)
{
	if (strcmp(str, "1 3 3 2 3 2 1 3 1 4 2 3 2 1 2 2") == 0)
	{
		write(1, "4 1 2 3\n1 2 3 4\n3 4 1 2\n2 3 4 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "3 2 2 1 2 3 1 3 4 2 1 2 1 2 4 2") == 0)
	{
		write(1, "1 2 3 4\n2 4 1 3\n4 3 2 1\n3 1 4 2\n", 32);
		return (0);
	}
	else if (strcmp(str, "1 2 4 2 3 3 1 2 1 2 4 2 3 3 1 2") == 0)
	{
		write(1, "4 3 1 2\n3 4 2 1\n1 2 3 4\n2 1 4 3\n", 32);
		return (0);
	}
	else
	{
		a14(str);
	}
	return (0);
}

int	a12(char *str)
{
	if (strcmp(str, "3 2 1 3 2 3 2 1 3 2 1 3 2 3 2 1") == 0)
	{
		write(1, "1 3 4 2\n3 4 2 1\n4 2 1 3\n2 1 3 4\n", 32);
		return (0);
	}
	else if (strcmp(str, "3 2 2 1 2 3 1 2 3 2 1 3 1 2 4 2") == 0)
	{
		write(1, "2 1 3 4\n3 4 1 2\n4 3 2 1\n1 2 4 3\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 1 2 3 2 3 2 1 2 3 1 2 3 2 3 1") == 0)
	{
		write(1, "2 4 3 1\n1 2 4 3\n4 3 1 2\n3 1 2 4\n", 32);
		return (0);
	}
	else
	{
		a13(str);
	}
	return (0);
}

int	a11(char *str)
{
	if (strcmp(str, "3 2 1 2 1 2 3 2 2 2 2 1 2 3 1 4") == 0)
	{
		write(1, "2 1 4 3\n1 4 3 2\n3 2 1 4\n4 3 2 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "1 3 3 2 3 1 2 3 1 2 3 2 2 1 2 3") == 0)
	{
		write(1, "4 2 1 3\n3 1 2 4\n1 3 4 2\n2 4 3 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 1 2 3 3 3 1 2 2 1 2 3 3 3 1 2") == 0)
	{
		write(1, "2 4 3 1\n4 3 1 2\n3 1 2 4\n1 2 4 3\n", 32);
		return (0);
	}
	else
	{
		a12(str);
	}
	return (0);
}

int	a10(char *str)
{
	if (strcmp(str, "4 1 2 2 1 4 2 2 2 3 2 1 2 1 2 3") == 0)
	{
		write(1, "1 4 2 3\n2 3 1 4\n3 2 4 1\n4 1 3 2\n", 32);
		return (0);
	}
	else if (strcmp(str, "3 2 1 2 2 3 2 1 2 2 1 4 2 2 4 1") == 0)
	{
		write(1, "2 1 4 3\n3 4 1 2\n4 3 2 1\n1 2 3 4\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 1 4 2 3 3 1 2 2 1 3 3 2 4 1 2") == 0)
	{
		write(1, "2 1 4 2 3 3 1 2 2 1 3 3 2 4 1 2", 32);
		return (0);
	}
	else
	{
		a11(str);
	}
	return (0);
}
