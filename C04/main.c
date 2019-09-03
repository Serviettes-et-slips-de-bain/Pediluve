#include <stdio.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int	main(void)
{
	int	i = -1000;

	while (i < 1000)
	{
		ft_putnbr(i);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
