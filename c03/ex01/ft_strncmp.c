int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>

int main()
{
	char s1[] = "strIng";
	char s2[] = "string";
	int a = strncmp(s1,s2,4);
	int b = ft_strncmp(s1,s2,4);
	printf("strncmp : %d\n",a);
	printf("ft_strncmp : %d\n",b);
	return 0;
}
*/
