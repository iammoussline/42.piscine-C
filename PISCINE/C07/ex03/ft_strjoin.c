/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:41:58 by thinkpad          #+#    #+#             */
/*   Updated: 2024/02/25 19:42:27 by thinkpad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sizetotal(int size, char **strs, char *sep)
{
	int	length;
	int	i;
	int	o;

	o = 0;
	length = 0;
	while (o < size)
	{
		i = 0;
		while (strs[o][i])
			i++;
		length = length + i;
		o++;
	}
	i = 0;
	while (sep[i])
		i++;
	length = length + (i * (size - 1));
	return (length);
}

int	ft_concat(char **dest, char *src, int b)
{
	int	i;

	i = 0;
	while (src[i])
	{
		(*dest)[b] = src[i];
		i++;
		b++;
	}
	return (b);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		o;
	int		b;

	if (size == 0 || !strs)
		return (malloc(1));
	s = malloc((sizetotal(size, strs, sep) + 1) * sizeof(char));
	if (s == 0)
		return (0);
	o = 0;
	b = 0;
	while (o < size)
	{
		b = ft_concat(&s, strs[o], b);
		if (o == (size - 1))
			break ;
		b = ft_concat(&s, sep, b);
		o++;
	}
	s[b] = '\0';
	return (s);
}

#include <stdio.h>
int	main(void)
{
	char *text[10];

	text[0] = "Test";
	text[1] = "a";
	text[2] = "function";
	text[3] = "ft_strjoin";
	text[4] = "com";
	text[5] = "o";
	text[6] = "separationr";
	text[7] = "NULL";
	text[8] = "s alut";
	text[9] = "10";

	printf("%s\n", ft_strjoin(3, NULL, NULL));
}

