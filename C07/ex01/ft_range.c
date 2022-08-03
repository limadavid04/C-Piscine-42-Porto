/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:08:57 by dlima             #+#    #+#             */
/*   Updated: 2022/08/02 16:51:07 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	n;
	int	i;
	int	*ptr;

	n = max - min;
	if (n == 0 || n < 0)
	{
		ptr = 0;
		return (ptr);
	}	
	else
	{
		i = 0;
		ptr = (int *)malloc(n * sizeof(int));
		while (i < n)
		{
			ptr[i] = min;
			i++;
			min++;
		}
		return (ptr);
	}
}
/*
int	main()
{
    int    *resposta;
    int     min = 2;
    int     max = 10;
    int    i = 0;
    resposta = ft_range(min, max);
    while (i < (max - min))
    {
        printf("%d", resposta[i]);
        i++;
    }
}
*/
