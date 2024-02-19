#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int argc, char **argv)
{
	int i;
	int o;
	
	i = 0;
	o = 1;
	(void) argc;

	while(argv[0][i] && argv[1])
	{
		ft_putchar(argv[1][i]);
		i++;
	}
}
