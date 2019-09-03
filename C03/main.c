#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char		*ft_strcat(char *dest, char *src);
char		*ft_strncat(char *dest, char *src, unsigned int nb);
char		*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);


int	main(void)
{
	char	*s;
	char	*s1;
	char	*s2;
//	unsigned int	n;

	if (!(s = (char*)malloc(sizeof(char) * 1024)))
		return (1);
	if (!(s1 = (char*)malloc(sizeof(char) * 1024)))
		return (1);
	if (!(s2 = (char*)malloc(sizeof(char) * 1024)))
		return (1);
	
	// strcmp
	s1 = strcpy(s1, "bonjour");
	s2 = strcpy(s2, "bonjour");
	printf("strcmp(%s, %s) =  %d\n", s1, s2, ft_strcmp(s1, s2));

	s1 = strcpy(s1, "Bonjour");
	s2 = strcpy(s2, "bonjour");
	printf("strcmp(%s, %s) =  %d\n", s1, s2, ft_strcmp(s1, s2));

	s1 = strcpy(s1, "bonj");
	s2 = strcpy(s2, "bonjour");
	printf("strcmp(%s, %s) =  %d\n", s1, s2, ft_strcmp(s1, s2));

	// strncmp
	s1 = strcpy(s1, "bonjour");
	s2 = strcpy(s2, "bonjour");
	printf("strcmp(%s, %s) =  %d\n", s1, s2, ft_strcmp(s1, s2));
	
	free(s);
	free(s1);
	free(s2);
	return (0);
}
