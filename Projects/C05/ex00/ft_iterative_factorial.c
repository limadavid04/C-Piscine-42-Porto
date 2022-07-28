/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:40:19 by dlima             #+#    #+#             */
/*   Updated: 2022/07/27 21:04:36 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		n *= nb;
		nb--;
	}
	return (n);
}
/*
int	main()
{
	printf("%d",ft_iterative_factorial(0));
}
*/
