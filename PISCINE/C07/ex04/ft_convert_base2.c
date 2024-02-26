/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:43:21 by thinkpad          #+#    #+#             */
/*   Updated: 2024/02/25 19:43:37 by thinkpad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sizetotal(long int nb, int size)
{
	int	b;
	int	sizearray;

	b = 0;
	sizearray = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		sizearray++;
	}
	while (nb >= size)
	{
		nb = nb / size;
		sizearray++;
	}
	return (sizearray + 1);
}

char	*ft_fonction(long int nb, int size, char *base, char *dest)
{
	int	b;
	int	sizeindex;
	int	t;

	sizeindex = sizetotal(nb, size);
	t = 0;
	b = 0;
	dest[sizeindex] = '\0';
	if (nb < 0)
	{
		nb = nb * -1;
		t = 1;
	}
	while (nb >= size)
	{
		b = nb % size;
		dest[sizeindex - 1] = base[b];
		nb = nb / size;
		sizeindex--;
	}
	dest[sizeindex - 1] = base[nb];
	if (t == 1)
		dest[0] = '-';
	return (dest);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int			i;
	long int	o;
	char		*p;

	i = 0;
	while (base[i])
	{
		o = 0;
		while (o < i)
		{
			if (base[i] == base[o] || (base[i] >= 9 && base[i] <= 13)
				|| base[i] == 32 || base[i] == '-' || base[i] == '+')
				return (0);
			o++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	p = malloc((sizetotal(nbr, i) + 1) * sizeof(char));
	if (p == 0)
		return (0);
	p = ft_fonction(nbr, i, base, p);
	return (p);
}
/*#include <stdio.h>
int main()
{
	char	*p;

	p = ft_putnbr_base(-356, "01");//bnuu%
	printf("%s", p);
}*/
