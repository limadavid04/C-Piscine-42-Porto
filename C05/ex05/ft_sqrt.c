/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:09:42 by dlima             #+#    #+#             */
/*   Updated: 2022/07/28 11:10:08 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	first;
	int	last;
	int	mid;

	first = 0;
	last = 46340;
	while (first <= last)
	{
		mid = (first + last) / 2;
		if (mid * mid < nb)
			first = mid + 1;
		else if (mid * mid == nb)
			return (mid);
		else
			last = mid - 1;
	}
	return (0);
}
/*
int	main()
{
	printf("%d", ft_sqrt(2147302921));
}
*/
