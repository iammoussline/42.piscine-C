/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrischma <hrischma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:12:41 by hrischma          #+#    #+#             */
/*   Updated: 2024/02/24 12:12:43 by hrischma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "t_type.h"

char	*ft_strcat(char *dest, char *src);
void	ft_putstr(char *str);
int	ft_iterative_power(int nb, int power);

int	ft_find(int nb, char *result, t_dict *dictionary)
{
	int	i;

	i = 0;
	while (i < sizeof(&dictionary) / sizeof(&dictionary[0]))
	{
		if (dictionary[i].key == nb)
		{
			ft_strcat(result, dictionary[i].value);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_check_count(int count, int nb, char *result, t_dict *dictionary)
{
	if (count == 1)
		ft_find(nb * ft_iterative_power(10, count), result, dictionary);
	else if (count % 3 == 0)
		ft_find(ft_iterative_power(10, count), result, dictionary);
	else
		ft_find(ft_iterative_power(10, count), result, dictionary);
	return (count);
}

char	*ft_create_result(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 2048);
	if (!result)
		return (NULL);
	result[0] = '\0';
	return (result);
}

char	*ft_convert(int nb, t_dict *dictionary)
{
	char	*result;
	int		count;

	count = 0;
	result = ft_create_result();
	while (nb > 0)
	{
		printf("%d\n", nb);
		if (ft_find(nb, result, dictionary) == 1)
			break ;
		while (nb % 10 == 0)
		{
			nb = nb / 10;
			count++;
		}
		nb = nb / 10;
		ft_find(nb % 10, result, dictionary);
		count++;
		if (count % 3 == 0)
			ft_check_count(count, nb % 1000, result, dictionary);
		else
			ft_check_count(count, nb % 10, result, dictionary);
		ft_strcat(result, " ");
	}
	ft_putstr(result);
	return (result);
}
