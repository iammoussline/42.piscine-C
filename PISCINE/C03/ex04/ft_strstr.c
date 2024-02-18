/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:29:12 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/18 18:41:51 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*i;
	char	*o;

	i = str;
	o = to_find;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		i = str;
		o = to_find;
		while (*o != '\0' && *i == *o)
		{
			i++;
			o++;
		}
		if (*o == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
