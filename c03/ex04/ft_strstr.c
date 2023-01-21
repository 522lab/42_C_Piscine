/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:03:20 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/01/21 19:22:01 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
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
				break ;
		}
		if (!to_find[j])
			return (&str[i]);
	}
	return (0);
}
