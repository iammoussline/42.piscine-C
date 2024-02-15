#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	char last;

	i = 0;
	last = '\0';
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			if (!(last >= 'a' && last <= 'z'))
				if (!(last >= 'A' && last <= 'Z'))
					if (!(last >= '0' && last <= '9'))
						str[i] -= 32;
		last = str[i];
		i++;
	}
	return (str);
}

int main()
{
    char str[] = "43mots hello bg il est 13h30 AHHHH";
    ft_strcapitalize(str);
    printf("%s\n", str);
    return 0;
}
