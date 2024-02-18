#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
			str++;
	}
}

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		a;

	i = 0;
    a = 0;
	if (str[i] == '\0')
	{
        ft_putstr("Error");
    }
	while (str[i] && a != 16)
	{
		if (str[i] >= '1' && str[i] <= '4')
        {
            i = i + 2;
            a++;
        }
        else
        {
            ft_putstr("Error");
            return (1);
        }
    }
    return(0);
}



int     main (int argc, char **argv)
    {
        if(argc != 2)
        {
            ft_putstr("Error");
            return (1);
        }

        if(ft_str_is_numeric(argv[1])==1);
        {
            return (1);
        }

    }