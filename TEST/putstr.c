#include <unistd.h>

char ft_putchar (char c)
{
	write(1, &c, 1);
}

	char 	ft_putstr(char *str)
{		
	
	while (*str != '\0')
{
	ft_putchar(*str);
	str++;
}
}



int main ()
{
	char str[50] = "nfuiehrguiehrguenrgoneor";

	ft_putstr(str);

	return 0;
}
