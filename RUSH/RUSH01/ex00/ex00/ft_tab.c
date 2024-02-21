void	affiche_tab(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(str[i * 4 +j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	**str_to_tab(char *str)
{
	int	tab[4][4];
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = str[i * 4 + j] - '0';
			j++;
		}
		i++;
	}
}