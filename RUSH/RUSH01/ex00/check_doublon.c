#include <stdio.h>






//vérifie qu'il n'y ait pas de doublons sur chaque colonne
int	check_no_duplicate_column(char *str)
{
	int j;
	int a;
	int i;

	j = 0;
	while ( j < 4 )
	{
		a = j;
		while ( a / 4  < 4 )
		{
			i = a + 4;
			while ( i / 4 <  4)
			{
				if (str[i]==str[a])
					return (1);
				i += 4;
			}
			a += 4;
		}
		j++;
	}
	return (0);
}

//vérifie qu'il n'y ait pas de doublons sur chaque ligne
int	check_no_duplicate_line(char *str)
{
	int j;
	int a;
	int i;

	j = 0;
	while ( j < 4 )
	{
		a = 0;
		while ( a < 4 )
		{
			i = a + 1;
			while (i < 4)
			{
				if (str[i + j * 4]==str[a + j *4])
					return (1);
				i++;
			}
			a++;
		}
		j++;
	}
	return (0);
}

int	check_no_duplicate(char *str)
{
	return (check_no_duplicate_line(str) || check_no_duplicate_column(str));
}