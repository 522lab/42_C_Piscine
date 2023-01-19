/////////////// C02 - ex00 - ft_strcpy ///////////////
// #include <stdio.h>
// #include <string.h>

// char	*ft_strcpy(char *dest, char *src)
// {
// 	int	i;

// 	i = -1;
// 	while (src[++i])
// 		dest[i] = src[i];
// 	dest[i] = '\0';
// 	return (dest);
// }
// // int     main(void)
// // {
// //     // Imposter concept...
// //     // I have null terminator.
// //     // I don't care buffer, I care src.
// //     int buffer = 15;
// //     // real
// //     char src1[] = "abcdefgh";
// //     char dest1[buffer];
// //     printf("---strcpy (real)---\n");
// //     strcpy(dest1, src1);
// //     printf("string: %s\n", dest1);
// //     printf("size: %ld\n", sizeof(dest1));
// //     // imposter
// //     char src2[] = "abcdefgh";
// //     char dest2[buffer];
// //     printf("\n---ft_strcpy (imposter)---\n");
// //     ft_strcpy(dest2, src2);
// //     printf("string: %s\n", dest2);
// //     printf("size: %ld\n", sizeof(dest2));
// //     return 0;
// // }
/////////////// C02 - ex01 - ft_strncpy ///////////////
// #include <stdio.h>
// #include <string.h>

// char	*ft_strncpy(char *dest, char *src, unsigned int n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (i < n && src[i] != '\0')
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	while (i < n)
// 	{
// 		dest[i] = '\0';
// 		i++;
// 	}
// 	return (dest);
// }
// int     main(void)
// {
//     // Imposter concept...
//     // I have null terminator.
//     // I care buffer and I care src.
//     unsigned int buffer = 15;
//     // real
//     char src1[] = "abcdefgh";
//     char dest1[buffer];
//     printf("---strncpy (real)---\n");
//     strncpy(dest1, src1, buffer);
//     printf("string: %s\n", dest1);
//     printf("size: %ld\n", sizeof(dest1));
//     // imposter
//     char src2[] = "abcdefgh";
//     char dest2[buffer];
//     printf("\n---ft_strncpy (imposter)---\n");
//     ft_strncpy(dest2, src2, buffer);
//     printf("string: %s\n", dest2);
//     printf("size: %ld\n", sizeof(dest2));
//     return 0;
// }
/////////////// C02 - ex02 - ft_str_is_alpha ///////////////
// #include <stdio.h>
// #include <string.h>

// int	ft_str_is_alpha(char *str)
// {
// 	int	i;

// 	i = -1;
// 	while (str[++i])
// 	{
// 		if (!((str[i] >= 'a' && str[i] <= 'z')
// 				|| (str[i] >= 'A' && str[i] <= 'Z')))
// 		{
// 			return (0);
// 		}
// 	}
// 	return (1);
// }
// int     main(void)
// {
//     printf("%d\n", ft_str_is_alpha("1234"));
//     printf("%d\n", ft_str_is_alpha("a12d"));
//     printf("%d\n", ft_str_is_alpha("abc1"));
//     printf("%d\n", ft_str_is_alpha(""));
//     printf("%d\n", ft_str_is_alpha("AbcD"));
//     printf("%d\n", ft_str_is_alpha("abcd"));
//     return 0;
// }
/////////////// C03 - ex03 - ft_str_is_numeric ///////////////
// #include <stdio.h>
// #include <string.h>

// int	ft_str_is_numeric(char *str)
// {
// 	int	i;

// 	i = -1;
// 	while (str[++i])
// 	{
// 		if (!(str[i] >= '0' && str[i] <= '9'))
// 		{
// 			return (0);
// 		}
// 	}
// 	return (1);
// }
// int     main(void)
// {
//     printf("%d\n", ft_str_is_numeric("abcd"));
//     printf("%d\n", ft_str_is_numeric("1ab2"));
//     printf("%d\n", ft_str_is_numeric("123a"));
//     printf("%d\n", ft_str_is_numeric(""));
//     printf("%d\n", ft_str_is_numeric("1234"));
//     printf("%d\n", ft_str_is_numeric("1234567890"));
//     return 0;
// }
/////////////// C03 - ex04 - ft_str_is_lowercase ///////////////
// #include <stdio.h>
// #include <string.h>

// int	ft_str_is_lowercase(char *str)
// {
// 	int	i;

// 	i = -1;
// 	while (str[++i])
// 	{
// 		if (!(str[i] >= 'a' && str[i] <= 'z'))
// 		{
// 			return (0);
// 		}
// 	}
// 	return (1);
// }
// int     main(void)
// {
//     printf("%d\n", ft_str_is_lowercase("ABCD"));
//     printf("%d\n", ft_str_is_lowercase("aBCd"));
//     printf("%d\n", ft_str_is_lowercase("abcD"));
//     printf("%d\n", ft_str_is_lowercase(""));
//     printf("%d\n", ft_str_is_lowercase("abcd"));
//     printf("%d\n", ft_str_is_lowercase("abcdefgh"));
//     return 0;
// }
/////////////// C03 - ex05 - ft_str_is_lowercase ///////////////
// #include <stdio.h>
// #include <string.h>

// int	ft_str_is_uppercase(char *str)
// {
// 	int	i;

// 	i = -1;
// 	while (str[++i])
// 	{
// 		if (!(str[i] >= 'A' && str[i] <= 'Z'))
// 		{
// 			return (0);
// 		}
// 	}
// 	return (1);
// }
// int     main(void)
// {
//     printf("%d\n", ft_str_is_uppercase("abcd"));
//     printf("%d\n", ft_str_is_uppercase("AbcD"));
//     printf("%d\n", ft_str_is_uppercase("ABCd"));
//     printf("%d\n", ft_str_is_uppercase(""));
//     printf("%d\n", ft_str_is_uppercase("ABCD"));
//     printf("%d\n", ft_str_is_uppercase("ABCDEFGH"));
//     return 0;
// }
/////////////// C03 - ex06 - ft_str_is_printable ///////////////
// #include <stdio.h>

// int	ft_str_is_printable(char *str)
// {
// 	int	i;

// 	i = -1;
// 	while (str[++i])
// 	{
// 		if (!(str[i] >= ' ' && str[i] <= '~'))
// 		{
// 			return (0);
// 		}
// 	}
// 	return (1);
// }
// int     main(void)
// {
//     printf("%d\n", ft_str_is_printable("\t"));
//     printf("%d\n", ft_str_is_printable("\n"));
//     printf("%d\n", ft_str_is_printable("\v"));
//     printf("%d\n", ft_str_is_printable(""));
//     printf("%d\n", ft_str_is_printable("&*#%^&@#%Y*(#"));
//     printf("%d\n", ft_str_is_printable("abcd1234"));
//     return 0;
// }
/////////////// C03 - ex07 - ft_strupcase ///////////////
// #include <stdio.h>

// char	*ft_strupcase(char *str)
// {
// 	int	i;

// 	i = -1;
// 	while (str[++i])
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 		{
// 		    str[i] -= 32;
// 		}
// 	}
// 	return (str);
// }
// int     main(void)
// {
//     char str[] = "Abc12Def45#Ucs%$fgH";
//     printf("%s\n", ft_strupcase(str));

//     return 0;
// }
/////////////// C03 - ex08 - ft_strlowcase ///////////////
// #include <stdio.h>

// char	*ft_strlowcase(char *str)
// {
// 	int	i;

// 	i = -1;
// 	while (str[++i])
// 	{
// 		if (str[i] >= 'A' && str[i] <= 'Z')
// 		{
// 		    str[i] += 32;
// 		}
// 	}
// 	return (str);
// }
// int     main(void)
// {
//     char str[] = "aB12DefASFJKUcs%$fgH";
//     printf("%s\n", ft_strlowcase(str));
//     return 0;
// }
/////////////// C03 - ex09 - ft_strcapitalize ///////////////
// #include <stdio.h>

// char	*ft_strlowcase(char *str)
// {
// 	int	i;

// 	i = -1;
// 	while (str[++i])
// 	{
// 		if (str[i] >= 'A' && str[i] <= 'Z')
// 		{
// 			str[i] += 32;
// 		}
// 	}
// 	return (str);
// }

// char	*ft_strcapitalize(char *str)
// {
// 	int	i;
// 	int	capital;

// 	ft_strlowcase(str);
// 	capital = 1;
// 	i = -1;
// 	while (str[++i])
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 		{
// 			if (capital == 1)
// 			{
// 				str[i] -= 32;
// 				capital = 0;
// 			}
// 		}
// 		else if (str[i] >= '0' && str[i] <= '9')
// 			capital = 0;
// 		else
// 			capital = 1;
// 	}
// 	return (str);
// }
// int     main(void)
// {
//     char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
//     printf("%s\n", ft_strcapitalize(str));
//     return 0;
// }