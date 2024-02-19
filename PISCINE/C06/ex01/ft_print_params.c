#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int argc, char **argv)
{
	int i;
	int o;

	i = 1;
	while(argv[i] != 0)
	{
		o = 0;
		while(argv[i][o] != 0)
		{
			ft_putchar(argv[i][o]);
			o++;
		}
		ft_putchar('\n');
	i++;
	}
	return (0);
}
