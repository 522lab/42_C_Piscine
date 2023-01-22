char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j])
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

	char dest1[] = "hi, ";
	char dest2[] = "hi, ";
	char src[] = "mom";
	//strcat not work (hardware instruction)
	printf("--------------ft_strcat-------------\n");
	printf("%s\n", strncat(dest1,src, 2));
	printf("%s\n", ft_strncat(dest2,src, 2));
	return 0;
}
*/
