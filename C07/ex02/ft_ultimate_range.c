/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:40:59 by dlima             #+#    #+#             */
/*   Updated: 2022/08/01 14:55:00 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int n;
    int *ptr;

    n = min - max;
    if (n == 0 || n < 0)
    {
        *range = 0;
        return (0);
    }
    else
    {
        i = 0;
        ptr = (char *)malloc(n * sizeof(int));
        if (ptr == 0)
        {
            *range = 0;
            return (-1);
        }
        *range = ptr;
        while (i < n)
        {
            ptr[i] = min;
            min++;
            i++;
        }
    }   return (n);
}
