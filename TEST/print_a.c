#include <unistd.h>


char ft_putchar(char c)
{
	write(1, &c, 1);
}




	char ft_print_reverse(char *str)
{

	int	i;

	i = 0;


	while(str[i])
	{
		if(str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
		i++;
	}
	return 0;
}

int main ()
{
	char str[50] = "ABCDEFGHIJKLMOPKDHDGDFEEG";

		ft_print_reverse(str);
	return 0;
}


		
