/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:54:57 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/11 22:09:02 by ynyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_space(void);
void	ft_put_outlines(int l, int h, int x, int y);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	h;

	h = 0;
	while (h < y)
	{
		l = 0;
		while (l < x)
		{
			if ((l > 0 && l < x - 1) && (h > 0 && h < y - 1))
				ft_put_space();
			else
				ft_put_outlines(l, h, x, y);
			l++;
		}
		h++;
		ft_putchar('\n');
	}
}

/*	pos[0] xy_origin
	pos[1] = y_end
	pos[2] = x_end
	pos[3] = xy_end
	pos[4] = middle_h
	pos[5] = middle_v
*/

void	ft_put_outlines(int l, int h, int x, int y)
{
	char	pos[7];

	pos[0] = 'A';
	pos[1] = 'C';
	pos[2] = 'C';
	pos[3] = 'C';
	pos[4] = 'B';
	pos[5] = 'B';
	pos[6] = '\0';
	if (l == 0 && h == 0)
		ft_putchar(pos[0]);
	else if (l == 0 && h == y - 1)
		ft_putchar(pos[1]);
	else if (l == x - 1 && h == 0)
		ft_putchar(pos[2]);
	else if (l == x - 1 && h == y - 1)
		ft_putchar(pos[3]);
	else if ((l == 0 || l == x -1) && (h > 0 && h < y - 1))
		ft_putchar(pos[4]);
	else if ((l > 0 && l < x - 1) && (h == 0 || h == y - 1))
		ft_putchar(pos[5]);
}
