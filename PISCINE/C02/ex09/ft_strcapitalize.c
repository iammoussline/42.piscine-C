/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:07:54 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/14 15:07:29 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] +32;
			i++;
		}
        i++;
	}
	return (str);
}

char	*ft_strupcase(char *str)
{
    int i;
    i = 0;
    int o;
    o = i - 1; 

    while (str[i] != '\0')
    {
    
        if ((str[o] >= 32 && str[o] <= 47) || (str[o] >= 58 && str[o] <= 64))
        {
            str[i] = -32;
        }
        else if ((str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126));
            {
                
            }
            i++;
    }

    return (str);
}


char    *ft_strcapitalize(char *str)
{
    ft_strlowcase(str);
    ft_strupcase(str);
    return (str);
}


int main ()
{
	char str[] = "Hello Bg il est 13h30";

	ft_strcapitalize(str);

	printf("%s", str);

	return 0;
}
