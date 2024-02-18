void    ft_putstr(char *s)
{
        while (*s)
        {
                write(1, &(*s), 1);
                s++;
        }
}

int     ft_strncmp(const char *s1, const char *s2, int n)
{
        int  i;

        i = 0;
        if (n == 0)
                return (0);
        while (s1[i] && s2[i] && i < n && s1[i] == s2[i])
                i++;
        if (i == n)
                return (0);
        return (s1[i] - s2[i]);
}


int 	ft_strlen(const char *s)
{
        int  i;

        i = 0;
        while (s[i])
                i++;
        return (i);
}



void 	levelup(char *str)
{
	int len;
	int rev;
	int i;

	len = ft_strlen(str);
	i = 0;

	while ( i < len )
	{
		if (str[i] > '4')
		{
			str[i] = '1';
			rev = i;
			if (i != len - 1)
			{
				str[i+1] += 1;
				while (rev)
					str[--rev] = '1';
			}
			else
			{
				while(rev > 1)
					str[--rev] = '1';
				str[0] += 1;
			}
		}
		i++;
	}
}