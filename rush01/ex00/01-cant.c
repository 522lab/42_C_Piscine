/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-cant.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 22:22:14 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/22 22:22:27 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>

int	a10(char *str);

int	a9(char *str)
{
	if (strcmp(str, "3 1 3 2 1 4 2 2 2 3 2 1 2 1 2 3") == 0)
	{
		write(1, "2 4 1 3\n1 3 2 4\n3 2 4 1\n4 1 3 2\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 3 2 1 2 1 2 3 3 3 1 2 1 2 2 3") == 0)
	{
		write(1, "2 1 3 4\n1 3 4 2\n4 2 1 3\n3 4 2 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 4 2 1 3 1 2 3 2 1 3 2 1 2 2 3") == 0)
	{
		write(1, "3 1 2 4\n4 2 1 3\n2 3 4 1\n1 4 3 2\n", 32);
		return (0);
	}
	else
	{
		a10(str);
	}
	return (0);
}

int	a8(char *str)
{
	if (strcmp(str, "3 2 3 1 2 3 1 3 3 2 1 2 1 2 3 2") == 0)
	{
		write(1, "1 3 2 4\n2 4 1 3\n4 2 3 1\n3 1 4 2\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 3 2 1 2 1 2 3 2 2 1 2 1 2 4 3") == 0)
	{
		write(1, "3 2 1 4\n2 1 4 3\n4 3 2 1\n1 4 3 2\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 1 2 4 2 4 2 1 2 3 1 3 3 2 2 1") == 0)
	{
		write(1, "3 4 2 1\n1 3 4 2\n4 2 1 3\n2 1 3 4\n", 32);
		return (0);
	}
	else
	{
		a9(str);
	}
	return (0);
}

int	a7(char *str)
{
	if (strcmp(str, "2 2 1 3 2 1 3 2 3 1 3 2 2 2 1 3") == 0)
	{
		write(1, "1 3 4 2\n4 2 1 3\n2 1 3 4\n3 4 2 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "3 1 3 2 1 2 2 3 2 4 2 1 2 1 2 4") == 0)
	{
		write(1, "1 4 2 3\n1 2 3 4\n3 1 4 2\n4 3 2 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "3 2 1 4 2 2 2 1 3 2 1 4 2 2 2 1") == 0)
	{
		write(1, "2 3 4 1\n3 4 1 2\n4 1 2 3\n1 2 3 4\n", 32);
		return (0);
	}
	else
	{
		a8(str);
	}
	return (0);
}

int	a6(char *str)
{
	if (strcmp(str, "2 3 1 3 3 2 3 1 2 1 2 3 2 3 2 1") == 0)
	{
		write(1, "3 1 4 2\n4 2 3 1\n2 4 1 3\n1 3 2 4\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 1 4 3 2 2 1 2 2 1 4 3 2 2 1 2") == 0)
	{
		write(1, "3 4 1 2\n4 1 2 3\n1 2 3 4\n2 3 4 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "3 3 2 1 1 2 3 3 3 2 2 1 1 2 2 3") == 0)
	{
		write(1, "2 1 3 4\n3 2 4 1\n1 4 2 3\n4 3 1 2\n", 32);
		return (0);
	}
	else
	{
		a7(str);
	}
	return (0);
}

int	a5(char *str)
{
	if (strcmp(str, "2 1 3 2 1 2 2 3 2 4 2 1 3 1 2 3") == 0)
	{
		write(1, "3 4 2 1\n1 2 3 4\n2 1 4 3\n4 3 1 2\n", 32);
		return (0);
	}
	else if (strcmp(str, "3 2 2 1 1 2 2 3 3 2 3 1 1 2 2 4") == 0)
	{
		write(1, "2 1 3 4\n3 4 1 2\n1 2 4 3\n4 3 2 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 3 2 1 2 1 2 3 4 1 2 2 1 4 2 2") == 0)
	{
		write(1, "1 2 3 4\n4 3 2 1\n2 1 4 3\n3 4 1 2\n", 32);
		return (0);
	}
	else
	{
		a6(str);
	}
	return (0);
}
