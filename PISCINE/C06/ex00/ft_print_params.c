#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0') 
	{
		ft_putchar(str[i]);
		i++;
	}
}

#include <stdio.h>
int main(int argc, char **argv)
{
    int i;

    i = 0;
    (void) argc;
    ft_putstr(argv[0]);
    printf("%d\n", argc);

    return(0);
}
