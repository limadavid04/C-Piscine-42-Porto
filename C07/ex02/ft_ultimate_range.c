/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:40:59 by dlima             #+#    #+#             */
/*   Updated: 2022/08/02 16:47:19 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	n;
	int	*ptr;

	n = max - min;
	if (n == 0 || n < 0)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	ptr = (int *)malloc(n * sizeof(int));
	if (ptr == 0)
	{
		*range = 0;
		return (-1);
	}
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	*range = ptr;
	return (n);
}
/*
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;
	
	i = 0;
	min = -5;
	max = 20;
	size = ft_ultimate_range(&tab, min, max);
	printf("%d\n", size);
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
*/
