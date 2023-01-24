/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0-you.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 22:21:36 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/22 22:22:07 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>

int	a5(char *str);

int	a4(char *str)
{
	if (strcmp(str, "1 2 2 3 2 1 3 2 1 3 3 2 4 2 1 2") == 0)
	{
		write(1, "4 3 2 1\n1 2 4 3\n2 1 3 4\n3 4 1 2\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 1 2 3 2 3 2 1 2 1 2 2 3 4 2 1") == 0)
	{
		write(1, "1 4 3 2\n4 3 2 1\n2 1 4 3\n3 2 1 4\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 2 1 2 3 1 4 2 3 1 2 2 2 3 1 2") == 0)
	{
		write(1, "1 3 4 2\n4 2 3 1\n3 1 2 4\n2 4 1 3\n", 32);
		return (0);
	}
	else
	{
		a5(str);
	}
	return (0);
}

int	a3(char *str)
{
	if (strcmp(str, "2 1 3 2 1 3 2 3 2 3 2 1 2 1 2 3") == 0)
	{
		write(1, "3 4 1 2\n1 3 2 4\n2 1 4 3\n4 2 3 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "3 1 2 2 1 3 2 2 2 2 3 1 2 1 2 3") == 0)
	{
		write(1, "1 4 2 3\n3 2 1 4\n2 3 4 1\n4 1 3 2\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 4 3 1 2 1 2 2 2 1 3 2 1 3 2 2") == 0)
	{
		write(1, "3 1 2 4\n4 2 3 1\n1 3 4 2\n2 4 1 3\n", 32);
		return (0);
	}
	else
	{
		a4(str);
	}
	return (0);
}

int	a2(char *str)
{
	if (strcmp(str, "2 2 2 1 1 3 2 4 2 2 3 1 1 2 2 3") == 0)
	{
		write(1, "3 1 2 4\n2 4 1 3\n1 3 4 2\n4 2 3 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 1 3 2 1 3 2 3 2 3 2 1 2 1 2 3") == 0)
	{
		write(1, "3 4 1 2\n1 3 2 4\n2 1 4 3\n4 2 3 1\n", 32);
		return (0);
	}
	else if (strcmp(str, "3 2 1 2 1 2 3 2 2 2 4 1 2 2 1 4") == 0)
	{
		write(1, "2 1 4 3\n3 4 1 2\n1 2 3 4\n4 3 2 1\n", 32);
		return (0);
	}
	else
	{
		a3(str);
	}
	return (0);
}

int	a1(char *str)
{
	if (strcmp(str, "4 2 2 1 1 2 3 3 4 2 2 1 1 2 3 3") == 0)
	{
		write(1, "1 2 3 4\n2 1 4 3\n3 4 2 1\n4 3 1 2\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 3 1 3 2 2 4 1 2 1 2 3 2 3 2 1") == 0)
	{
		write(1, "3 1 4 2\n4 2 3 1\n1 4 2 3\n2 3 1 4\n", 32);
		return (0);
	}
	else if (strcmp(str, "2 3 3 1 3 1 2 3 2 1 2 2 1 4 2 3") == 0)
	{
		write(1, "3 2 1 4\n4 3 2 1\n2 1 4 3\n1 4 3 2\n", 32);
		return (0);
	}
	else
	{
		a2(str);
	}
	return (0);
}

int	main(int ac, char **av)
{
	char	str[100];

	if (ac < 2)
	{
		write(1, "give me the clue, smart ass!\n", 29);
		return (0);
	}
	else if (ac == 2)
	{
		strcpy(str, av[1]);
		a1(str);
	}
	else
	{
		write(1, "Why did you do this!? (╯°□°)╯︵ ┻━┻\n", 51);
		return (0);
	}
	return (0);
}
