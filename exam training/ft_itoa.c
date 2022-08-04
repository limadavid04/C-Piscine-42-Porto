/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 15:04:36 by dlima             #+#    #+#             */
/*   Updated: 2022/07/29 16:10:11 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	char	*arr;
	int	n;;
	int	value;

	n = 1;
	value = nbr;
	while (value / 10)
	{
		value /= 10;
		n++;
	}
	if (nbr < 0)
		n++;
	arr = (char *)malloc((n + 1) * sizeof(char));
	
	
	if (nbr == -2147483648)
		arr = "-2147483648";
	else 
	{
		if (nbr < 0)
	        {
                	arr[0] = '-';
                	nbr *= -1;
        	}


		arr[n] = '\0';
		n--;
		while (n >= 0)
		{
			arr[n] =(nbr % 10) + 48;
			n--;
			nbr /= 10; 	
		}
	}
	return (arr);
}
#include <stdio.h>
int	main()
{
	printf("%s", ft_itoa(21474836));
}
