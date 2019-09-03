#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

# define BUFF_SIZE 4096
// A mettre dans le .h

char		*ft_strrealloc(char *dest, unsigned int size)
{
	char		*new;
	unsigned int	i;

	i = 0;
	printf("%u\n", size);
	if (!(new = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	while (dest[i])
	{
		new[i] = dest[i];
		i++;
	}
	new[i] = '\0';
	free(dest);
	return (new);
}

char		*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
}

char		*read_file(char *file_name)
{
	char		*dest;
	char		buff[BUFF_SIZE + 1];
	unsigned int	len;
	int		fd;
	int		ret[2];

	len = 8192;
	if ((fd = open(file_name, O_RDONLY)) == -1)
		return (NULL);
	if (!(dest = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	dest[0] = '\0';
	while ((ret[0] = read(fd, buff, BUFF_SIZE)))
	{
		buff[ret[0]] = '\0';
		ret[1] += ret[0];
		if (ret[1] > 200000000)
			exit(0);
		if (ret[1] >= len)
			if (!(dest = ft_strrealloc(dest, (len *= 2))))
				return (NULL);
		ft_strcat(dest, &buff[0]);
	}
	return (dest);
}

int		main(void)
{
	char	*file;
	char	**map;

	if (!(file = read_file("/dev/urandom")))
		return (1);
	if (!(map = parsing(file)))
		return (1);
	free(file);
	return (0);
}
