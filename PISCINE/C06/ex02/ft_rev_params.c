#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	o;
	int	m;

	i = 0;
	o = size - 1;
	while (i < o)
	{
		m = tab[i];
		tab[i] = tab[o];
		tab[o] = m;
		i++;
		o--;
	}
}




int	main(int argc, char **argv)
{
	int i;
	int o;

	i = argv - 1;
	while(argv[i] > 1)
	{
		o = 0;
		while(argv[i][o] < 1)
		{
			ft_putchar(argv[i][o]);
			o++;
		}
		ft_putchar('\n');
	i--;
	}
	return (0);
}