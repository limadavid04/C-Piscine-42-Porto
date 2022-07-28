/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:11:14 by dlima             #+#    #+#             */
/*   Updated: 2022/07/19 15:03:13 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	r;
	int	temp;

	r = 0;
	i = size - 1;
	while (i >= r)
	{
		temp = tab[i];
		tab[i] = tab[r];
		tab[r] = temp;
		i--;
		r++;
	}
}
/*
int	main()
{
	int	size;
	int	i;
	size = 5;
	int	arr[5] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(arr, size);
	
	i = 0;
	while(i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
}
*/
