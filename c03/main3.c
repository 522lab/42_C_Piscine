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

int	main(void)
{
	printf("ex00/ft_strcmp\n");
	printf("Expected:\t%d\n", ft_strcmp("00", "01"));
	printf("Result:\t\t%d\n", strcmp("00", "01"));

	printf("\nex01/ft_strncmp\n");
	printf("Expected:\t%d\n", ft_strncmp("009", "010", 2));
	printf("Result:\t\t%d\n", strncmp("009", "010", 2));
	
	printf("\nex02/ft_strcat\n");
	char ex2dest1[10] = "abc";
	char ex2dest2[10] = "abc";
	printf("Expected:\t%s\n", ft_strcat(ex2dest1, "def"));
	printf("Result:\t\t%s\n", strcat(ex2dest2, "def"));
	return (0);
}
