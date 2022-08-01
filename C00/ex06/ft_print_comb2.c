/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:27:40 by dlima             #+#    #+#             */
/*   Updated: 2022/07/17 17:02:46 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prnt(char c)
{
	write(1, &c, 1);
}

void	prnt_comb(char a, char b)
{
	prnt(48 + a / 10);
	prnt(48 + a % 10);
	prnt(' ');
	prnt(48 + b / 10);
	prnt(48 + b % 10);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			prnt_comb(a, b);
			if (!(a == 98 && b == 99))
			{
				prnt(',');
				prnt(' ');
			}
			b++;
		}
		a++;
	}
}
