/* ************************************************************************** */
/*            .                        				              */
/*          ^???77~~!~.               :::::::::	     ::::::::      ::::::::   */
/*         ~P?????7777~^:            ::+           :+:    :+:    :+:    :+:   */
/*        .~!?Y5G#GY?!!!7:          ::+:+:+             +:+           +:+     */
/*        .^J?7YB#BPY?7!!7!^.            +#+          +#+           +#+       */
/*        7J5GBBPJ7!~~777?7~.  +#+       +#+        +#+           +#+         */
/*        YBBBBPY??JJYJ?7~~~!.  +#+    +#+       #+#           #+#            */
/*        5BBB#BGGGPP5Y7!~^~7!   +#####+       ############  ############     */
/*        5BBBBBBBBGGG57!~~!!^^                                               */
/*        !P5GBGGGGGPY7!~~!!~~!.					      */
/*        ^PPPPPPP5Y77!~^~~~~~^      				              */
/*        7GBP~!JJY5?7!::^^~~:       				              */
/*   .~~^:?GP?~7Y55PJ7!::::.         				              */
/*    ...:Y5!!JY55Y5?!^.             				              */
/*   ^55PP7       .Y?:               				              */
/*    ::.         :Y7.               				      	      */
/*                Y57                				              */
/*               :.                 					      */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] && s2[++i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s2[i] < s1[i])
			return (1);
	}
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (++i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s2[i] < s1[i])
			return (1);
	}
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = -1;
	while (dest[++i])
	j = -1;
	while (src[++j])
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	while (dest[++i])
	j = -1;
	while (++j < nb)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char    *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!to_find)
		return (str);
	i = -1;
	while (str[++i])
	{
		j = 0;
		while (to_find[j])
		{
			if (str[i + j] == to_find[j])
				j++;
			else
				break;
		}
		if (!to_find[j])
			return (&str[i]);
	}
	return (0);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		if (i == size - 1)
		{
			while(dest[i] != '\0')
			{
				dest[i] = '\0';
				i++;
				j++;
			}
			return (i);
		}
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}

int	main(void)
{
	printf("ex00/ft_strcmp\n");
	printf("Expected:\t%d\n", strcmp("00", "01"));
	printf("Result:\t\t%d\n", ft_strcmp("00", "01"));

	printf("\nex01/ft_strncmp\n");
	printf("Expected:\t%d\n", strncmp("009", "010", 2));
	printf("Result:\t\t%d\n", ft_strncmp("009", "010", 2));

	printf("\nex02/ft_strcat\n");
	char ex2dest1[] = "abc";
	char ex2dest2[] = "abc";
	char ex2src[] = "def";
	printf("Expected:\t%s\n", strcat(ex2dest1, ex2src)); // NOT WORK ON Mac!!
	printf("Result:\t\t%s\n", ft_strcat(ex2dest2, ex2src));

	printf("\nex03/ft_strncat\n");
	unsigned int ex3nb = 2;
	char ex3dest1[] = "abc";
	char ex3dest2[] = "abc";
	char ex3src[] = "def";
	printf("Expected:\t%s\n", strncat(ex3dest1, ex3src, ex3nb)); // NOT WORK ON Mac!!
	printf("Result:\t\t%s\n", ft_strncat(ex3dest2, ex3src, ex3nb));

	printf("\nex04/ft_strstr\n");
	char ex4str[] = "abcdefgh";
	char ex4to_find[] = "ef";
	printf("Expected:\t%s\n", strstr(ex4str, ex4to_find));
	printf("Result:\t\t%s\n", ft_strstr(ex4str, ex4to_find));

	printf("\nex05/ft_strlcat\n");
	unsigned int ex5size = 16;
	char ex5dest[] = "abcd"; // this function cat dest to src
	char ex5src[] = "efgh";
	printf("Expected:\t%u\n", strlcat(ex5dest, ex5src, ex5size)); // NOT WORK ON Windows!!
	printf("Result:\t%u\n", ft_strlcat(ex5dest, ex5src, ex5size)); // NOT WORK ON Windows!!
	return (0);
}
