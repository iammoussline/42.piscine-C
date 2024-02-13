#include <unistd.h>
#include <stdio.h>

int     ft_str_is_printable(char *str)
{
	int		i;
	int		a;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 127)
		{
			a = 1;
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (a);
}
/*
int main ()
{
	char str[] = "oiguyijm4";
	char a[] = "";
	char b[] = "";

	int i;
	int o;
	int m;

	i = ft_str_is_alpha(str);
	o = ft_str_is_alpha(a);
	m = ft_str_is_alpha(b);

	printf("%d", i);
	printf("%d", o);
	printf("%d", m);

	return 0;
}
*/