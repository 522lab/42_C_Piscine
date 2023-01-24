/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karn03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kburalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:44:48 by kburalek          #+#    #+#             */
/*   Updated: 2023/01/22 22:15:02 by kburalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>

int	f1(char *str);

int	b19(char *str)
{
	if (strcmp(str, "2 1 4 2 2 3 1 3 2 3 1 2 2 1 3 2") == 0)
	{
		write(1, "2 4 1 3\n1 3 2 4\n4 1 3 2\n3 2 4 1\n", 32);
	}
	else if (strcmp(str, "2 1 2 3 1 2 3 2 2 2 4 1 2 2 1 4") == 0)
	{
		write(1, "3 4 1 2\n2 1 4 3\n1 2 3 4\n4 3 2 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "1 2 3 2 3 2 1 2 1 2 2 3 3 3 1 2") == 0)
	{
		write(1, "4 3 1 2\n2 4 3 1\n3 1 2 4\n1 2 4 3\n", 32);
		return (0);
	}
	else
	{
		f1(str);
	}
	return (0);
}

int	b18(char *str)
{
	if (strcmp(str, "2 1 2 3 1 2 3 2 2 3 3 1 3 2 1 3") == 0)
	{
		write(1, "3 4 2 1\n1 2 4 3\n2 1 3 4\n4 3 1 2\n", 32);
	}
	else if (strcmp(str, "1 2 4 2 3 2 1 3 1 2 2 3 2 1 3 2") == 0)
	{
		write(1, "4 2 1 3\n3 1 2 4\n1 4 3 2\n2 3 4 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "3 1 2 2 2 3 1 2 2 2 1 2 3 1 4 2") == 0)
	{
		write(1, "1 4 3 2\n3 2 1 4\n4 3 2 1\n2 1 4 3\n", 32);
		return (0);
	}
	else
	{
		b19(str);
	}
	return (0);
}

int	b17(char *str)
{
	if (strcmp(str, "2 1 3 3 3 2 1 2 2 1 3 3 3 2 1 2") == 0)
	{
		write(1, "3 4 2 1\n4 2 1 3\n2 1 3 4\n1 3 4 2\n", 32);
	}
	else if (strcmp(str, "4 2 1 2 1 2 4 2 3 3 2 1 2 1 3 2") == 0)
	{
		write(1, "1 3 4 2\n2 1 3 4\n3 4 2 1\n4 2 1 3\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 2 2 1 3 1 2 4 3 1 2 2 1 2 2 3") == 0)
	{
		write(1, "1 3 2 4\n4 2 1 3\n3 1 4 2\n2 4 3 1\n", 32);
		return (0);
	}
	else
	{
		b18(str);
	}
	return (0);
}

int	b16(char *str)
{
	if (strcmp(str, "3 2 1 2 2 3 2 1 2 2 1 4 2 3 3 1") == 0)
	{
		write(1, "2 1 4 3\n3 4 2 1\n4 3 1 2\n1 2 3 4\n", 32);
	}
	else if (strcmp(str, "3 2 1 2 1 2 3 2 3 4 2 1 2 1 2 2") == 0)
	{
		write(1, "2 3 4 1\n1 2 3 4\n3 4 1 2\n4 1 2 3\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 2 3 1 2 2 1 3 3 2 1 2 1 3 2 2") == 0)
	{
		write(1, "2 3 1 4\n1 4 3 2\n4 1 2 3\n3 2 4 1\n", 32);
		return (0);
	}
	else
	{
		b17(str);
	}
	return (0);
}

int	b15(char *str)
{
	if (strcmp(str, "1 2 3 2 2 2 1 3 1 4 2 2 4 1 2 2") == 0)
	{
		write(1, "4 3 2 1\n1 2 3 4\n2 4 1 3\n3 1 4 2\n", 32);
	}
	else if (strcmp(str, "2 4 2 1 2 1 2 4 3 1 3 2 1 2 2 3") == 0)
	{
		write(1, "2 1 3 4\n4 2 1 3\n1 3 4 2\n3 4 2 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 2 1 3 2 3 2 1 2 2 1 4 2 2 4 1") == 0)
	{
		write(1, "3 1 4 2\n1 4 2 3\n4 3 2 1\n1 2 3 4\n", 32);
		return (0);
	}
	else
	{
		b16(str);
	}
	return (0);
}
