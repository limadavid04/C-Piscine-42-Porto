/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:51:02 by dlima             #+#    #+#             */
/*   Updated: 2022/07/16 20:01:29 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	h;
	int	c;

	h = 0;
	while (h < y)
	{
		c = 0;
		while (c < x)
		{
			if (h != 0 && h != y - 1 && (c == 0 || c == x -1))
				ft_putchar('B');
			else if ((c == 0 && h == 0) || (h == y - 1 && c == x -1 && y > 1 && x > 1))
				ft_putchar('A');
			else if ((c == x - 1 && h == 0) || (h == y - 1 && c == 0))
				ft_putchar('C');
			else if ((h == 0 || h == y - 1) && (c != 0 && c != x - 1))
				ft_putchar('B');
			else if (h != 0 && h != y - 1 && c != 0 && c != x - 1)
				ft_putchar(' ');
			c++;
		}
		h++;
		ft_putchar('\n');
	}
}
