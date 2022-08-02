/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:40:59 by dlima             #+#    #+#             */
/*   Updated: 2022/08/01 21:12:27 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int n;
    int *ptr;

    n = max - min;
    if (n == 0 || n < 0)
    {
        *range = 0;
        return (0);
    }
    else
    {
        i = 0;
        ptr = (int *)malloc(n * sizeof(int));
        if (ptr == 0)
        {
            *range = 0;
            return (-1);
        }
        *range = ptr;
        while (i < n)
        {
            *range[i] = min;
            min++;
            i++;
        }
        return (n);
    }   
}
/*
int		main(void)
{
	int i;
	int *tab;
	int min;
	int max;
	int size;
    
	min = 0;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	if (tab != NULL)
	{
		i = -1;
		while (++i < max - min)
			printf("%d\n", tab[i]);
	}
	else
		printf("error");
	printf("Size: %d\n", size);
}
*/