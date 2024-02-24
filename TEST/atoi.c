#include <unistd.h>
#include <stdio.h>


	int ft_atoi (char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;

	while (str[i] == ' ')
		i++;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] = '+')
	       i++;

	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
			i++;
	}
	return sign * result;
}

int main ()
{
	int result;
	char str [50] = "+55";
	ft_atoi(str);
	result = ft_atoi(str);
	printf("voici %s et %d", str, ft_atoi(str));
	return 0;
}
			
