#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_all_len(char **strings, int size, int sep_len)
{
	int	all_len;
	int	i;

	all_len = 0;
	i = 0;
	while (i < size)
	{
		all_len += ft_strlen(strings[i]);
		all_len += sep_len;
		i++;
	}
	all_len -= sep_len;
	return (all_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		all_len;
	int		i;
	char	*res;
	char	*pos;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	all_len = ft_all_len(strs, size, ft_strlen(sep));
	res = (char *)malloc((all_len + 1) * sizeof(char));
	pos = res;
	if (!pos)
		return (0);
	i = -1;
	while (++i < size)
	{
		ft_strcpy(pos, strs[i]);
		pos += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(pos, sep);
			pos += ft_strlen(sep);
		}
	}
	*pos = '\0';
	return (res);
}
/* 
int main(void)
{
	int i;
	char **strs;
	char *sep;
	char *res;
	int size = 3;

	strs = (char **)malloc(size * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * (3 + 1));
	strs[1] = (char *)malloc(sizeof(char) * (1 + 1));
	strs[2] = (char *)malloc(sizeof(char) * (2 + 1));
	strcpy(strs[0], "522");
	strcpy(strs[1], ">");
	strcpy(strs[2], "42");
	sep = " ";
	res = ft_strjoin(size, strs, sep);
	printf("%s\n", res);
	for (int i = 0; i < size; i++)
	{
		free(strs[i]);
	}
	free(strs);
	free(res);
}
 */