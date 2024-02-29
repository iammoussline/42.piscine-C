#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	o = 0;
    i = argc - 1;
		while (argv[i][o])
		{
			ft_putchar(argv[i][o]);
            o++;
		}
		ft_putchar('\n');
	    return (0);
}

