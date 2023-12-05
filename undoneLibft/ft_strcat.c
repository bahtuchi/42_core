#include <string.h>
#include <stdio.h>

char *ft_strcat(char *s1,  const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(s1[i] != '\0')
		i++;
	while(s2[j] != '\0')
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return(s1);
}
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


int	main()
{
	char str1[50] = "Hello ";
	char str2[] = " World!";
	char str3[50] = "Hello ";
	char str4[] = " World!";

	strcat(str1, str2);
	ft_strcat(str3, str4);

	printf("%s", str1);
	printf("%s", str3);
}