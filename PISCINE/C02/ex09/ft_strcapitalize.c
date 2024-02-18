/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:07:54 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/16 14:09:44 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	letters(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char	to_uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int		last;

	i = 0;
	last = 0 + 1;
	while (str[i] != '\0')
	{
		if (letters(str[i]) && !(letters(last)))
		{
			str[i] = to_uppercase(str[i]);
		}
		else if (letters(str[i]))
		{
			if (!letters(last))
			{
				str[i] += 32;
			}
		}
		last = str[i];
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

char *ft_strcapitalize(char *str);
int letters(char c);
char to_uppercase(char c);

int main() {
    char str[] = "43mots hel-lo bg IL est 13h30 AHHHHHHHHH";
    printf("%s\n", ft_strcapitalize(str));
    return 0;
}
*/
