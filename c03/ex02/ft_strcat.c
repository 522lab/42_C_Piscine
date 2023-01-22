char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include<stdio.h>
#include<string.h>
int main(){

	char dest[] = "hi, ";
	char src[] = "mom";
	//strcat not work (hardware instruction)
	printf("--------------ft_strcat-------------\n");
	printf("%s\n", ft_strcat(dest,src));
	return 0;
}
*/
