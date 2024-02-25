/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:36:17 by thinkpad          #+#    #+#             */
/*   Updated: 2024/02/25 19:36:29 by thinkpad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	o;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		o = ft_fibonacci(index - 1);
		o = o + ft_fibonacci(index - 2);
	}
	return (o);
}
/*#include <stdio.h>
int main()
{
	int i;
	i = ft_fibonacci(7);
	printf("%d", i);
}*/
