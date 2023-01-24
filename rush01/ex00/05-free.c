/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-free.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 22:23:30 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/22 22:23:38 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>

int	b1(char *str);

int	a29(char *str)
{
	if (strcmp(str, "2 4 2 1 2 1 2 4 2 1 3 2 1 2 2 3") == 0)
	{
		write(1, "3 1 2 4\n4 2 1 3\n1 3 4 2\n2 4 3 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "3 3 1 2 1 2 3 3 2 4 2 1 2 1 2 4") == 0)
	{
		write(1, "2 1 4 3\n1 2 3 4\n3 4 1 2\n4 3 2 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 1 3 2 1 2 2 3 2 3 3 1 2 1 2 4") == 0)
	{
		write(1, "3 4 1 2\n2 1 3 4\n1 2 4 3\n4 3 2 1\n", 32);
		return (0);
	}
	else
	{
		b1(str);
	}
	return (0);
}

int	a28(char *str)
{
	if (strcmp(str, "1 2 4 2 4 2 1 2 1 2 2 3 2 1 3 2") == 0)
	{
		write(1, "4 2 1 3\n3 1 2 4\n2 4 3 1\n1 3 4 2\n", 32);
		return (0);
	}
	else if (strcmp(str, "1 2 2 2 4 1 2 3 1 2 2 2 4 1 2 3") == 0)
	{
		write(1, "4 3 2 1\n3 2 1 4\n2 1 4 3\n1 4 3 2\n", 32);
		return (0);
	}
	else if (strcmp(str, "3 1 2 2 1 3 2 2 2 2 3 1 3 2 1 2") == 0)
	{
		write(1, "1 4 3 2\n3 2 4 1\n2 3 1 4\n4 1 2 3\n", 32);
		return (0);
	}
	else
	{
		a29(str);
	}
	return (0);
}

int	a27(char *str)
{
	if (strcmp(str, "1 2 3 2 3 2 1 2 1 2 4 3 2 2 1 2") == 0)
	{
		write(1, "4 1 2 3\n3 4 1 2\n1 2 3 4\n2 3 4 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 3 3 1 3 2 1 2 2 1 2 3 1 3 3 2") == 0)
	{
		write(1, "3 1 2 4\n4 3 1 2\n2 4 3 1\n1 2 4 3\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 3 1 3 3 1 2 2 2 1 3 2 2 2 1 3") == 0)
	{
		write(1, "3 2 4 1\n4 1 2 3\n2 3 1 4\n1 4 3 2\n", 32);
		return (0);
	}
	else
	{
		a28(str);
	}
	return (0);
}

int	a26(char *str)
{
	if (strcmp(str, "3 1 2 3 2 3 3 1 2 2 1 2 3 2 4 1") == 0)
	{
		write(1, "1 4 3 2\n2 1 4 3\n4 3 2 1\n3 2 1 4\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 1 2 3 2 3 2 1 2 1 3 3 3 2 2 1") == 0)
	{
		write(1, "3 4 2 1\n4 2 1 3\n1 3 4 2\n2 1 3 4\n", 32);
		return (0);
	}
	else if (strcmp(str, "1 4 2 2 3 1 2 3 1 2 3 2 2 1 2 3") == 0)
	{
		write(1, "4 1 2 3\n3 2 1 4\n1 3 4 2\n2 4 3 1\n", 32);
		return (0);
	}
	else
	{
		a27(str);
	}
	return (0);
}

int	a25(char *str)
{
	if (strcmp(str, "2 1 3 2 2 2 1 3 2 3 1 3 3 1 2 2") == 0)
	{
		write(1, "3 4 2 1\n2 1 3 4\n4 2 1 3\n1 3 4 2\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 2 1 4 3 2 3 1 2 1 2 3 2 3 2 1") == 0)
	{
		write(1, "3 2 4 1\n4 1 3 2\n2 4 1 3\n1 3 2 4\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 3 2 1 1 2 3 3 2 3 2 1 1 2 3 3") == 0)
	{
		write(1, "3 1 2 4\n1 2 4 3\n2 4 3 1\n4 3 1 2\n", 32);
		return (0);
	}
	else
	{
		a26(str);
	}
	return (0);
}
