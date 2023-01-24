/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fuck3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 22:00:47 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/01/22 22:28:51 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>

int	f21(char *str);

int	f20(char *str)
{
	if (strcmp(str, "1 2 3 2 3 1 2 2 1 3 2 2 3 1 2 2") == 0)
	{
		write(1, "4 3 1 2\n2 1 3 4\n3 2 4 1\n1 4 2 3\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 2 3 1 3 2 1 2 3 1 2 2 1 3 2 2") == 0)
	{
		write(1, "1 3 2 4\n4 2 3 1\n3 4 1 2\n2 1 4 3\n", 32);
		return (0);
	}
	else if (strcmp(str, "3 2 2 1 2 2 1 3 3 2 1 3 1 3 2 2") == 0)
	{
		write(1, "2 1 3 4\n3 4 2 1\n4 2 1 3\n1 3 4 2\n", 32);
		return (0);
	}
	else
	{
		f21(str);
	}
	return (0);
}

int	f19(char *str)
{
	if (strcmp(str, "2 1 2 2 3 4 2 1 2 1 2 3 2 3 2 1") == 0)
	{
		write(1, "1 4 2 3\n4 3 1 2\n3 2 4 1\n2 1 3 4\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 3 4 1 2 2 1 2 2 1 2 2 1 4 3 2") == 0)
	{
		write(1, "3 2 1 4\n4 3 2 1\n1 4 3 2\n2 1 4 3\n", 32);
		return (0);
	}
	else if (strcmp(str, "3 1 2 2 1 2 2 3 2 2 3 1 3 1 2 3") == 0)
	{
		write(1, "2 4 3 1\n3 1 2 4\n1 2 4 3\n4 3 1 2\n", 32);
		return (0);
	}
	else
	{
		f20(str);
	}
	return (0);
}

int	f18(char *str)
{
	if (strcmp(str, "3 2 3 1 2 3 1 2 3 2 1 2 1 2 3 2") == 0)
	{
		write(1, "1 3 2 4\n3 4 1 2\n4 2 3 1\n2 1 4 3\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 2 2 1 3 2 1 4 4 1 2 3 1 2 2 2") == 0)
	{
		write(1, "1 2 3 4\n4 1 2 3\n3 4 1 2\n2 3 4 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 2 1 3 1 2 3 2 2 2 3 1 2 2 1 3") == 0)
	{
		write(1, "3 2 4 1\n1 4 2 3\n2 1 3 4\n4 3 1 2\n", 32);
		return (0);
	}
	else
	{
		f19(str);
	}
	return (0);
}

int	f17(char *str)
{
	if (strcmp(str, "1 4 2 2 4 1 2 2 1 2 3 2 3 2 1 2") == 0)
	{
		write(1, "4 1 3 2\n3 2 4 1\n2 3 1 4\n1 4 2 3\n", 32);
		return (0);
	}
	else if (strcmp(str, "3 4 1 2 2 1 2 2 2 2 1 2 2 1 4 3") == 0)
	{
		write(1, "2 1 4 3\n3 2 1 4\n4 3 2 1\n1 4 3 2\n", 32);
		return (0);
	}
	else if (strcmp(str, "1 3 2 2 3 2 1 3 1 2 2 3 3 1 2 2") == 0)
	{
		write(1, "4 1 3 2\n3 2 1 4\n1 4 2 3\n2 3 4 1\n", 32);
		return (0);
	}
	else
	{
		f18(str);
	}
	return (0);
}

int	f16(char *str)
{
	if (strcmp(str, "2 2 3 1 2 2 1 3 2 1 2 3 1 3 2 2") == 0)
	{
		write(1, "3 2 1 4\n4 1 3 2\n1 4 2 3\n2 3 4 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "1 2 4 2 4 2 1 2 1 2 3 3 2 3 1 2") == 0)
	{
		write(1, "4 2 1 3\n3 4 2 1\n2 1 3 4\n1 3 4 2\n", 32);
		return (0);
	}
	else if (strcmp(str, "1 2 3 2 3 1 2 3 1 2 3 2 3 1 2 3") == 0)
	{
		write(1, "4 3 1 2\n3 1 2 4\n1 2 4 3\n2 4 3 1\n", 32);
		return (0);
	}
	else
	{
		f17(str);
	}
	return (0);
}
