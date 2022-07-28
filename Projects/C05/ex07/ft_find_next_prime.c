/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:06:10 by dlima             #+#    #+#             */
/*   Updated: 2022/07/25 19:26:45 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	x;

	while (nb <= 2147483647)
	{
		i = 2;
		x = 1;
		while (i <= (nb / 2))
		{
			if (nb % i == 0)
				x = 0;
			if (x == 0)
				break ;
			i++;
		}
		if (x && nb > 1)
			return (nb);
		nb++;
	}
}
/*
int	main()
{
	printf("%d", ft_find_next_prime(2147483647));
}
*/
