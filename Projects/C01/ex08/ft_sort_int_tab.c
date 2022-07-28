/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:30:34 by dlima             #+#    #+#             */
/*   Updated: 2022/07/19 17:29:01 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j < size -1)
		{
			if (tab[i] > tab[j + 1])
			{
				temp = tab[j + 1];
				tab[j + 1] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main()
{	
	int i;
	int size;
	int arr[10] = {-6, 9, 1, -6, 0, 12, 8, 3, 5, -5};

	size = 10;
	i = 0;
	ft_sort_int_tab(arr, size);

	while (i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}

}
*/
