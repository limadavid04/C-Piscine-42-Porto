/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:42:49 by dlima             #+#    #+#             */
/*   Updated: 2022/07/29 14:47:15 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	sign(int minus)
{
	if (minus % 2 == 0)
		return (1);
	else
		return (-1);
}

int	ft_atoi(char *str)
{
	int	minus;
	int	i;
	int	n;

	minus = 0;
	i = 0;
	n = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (!(str[i] >= 48 && str[i] <= 57) && str[i] != '\0')
	{
		if (str[i] != '-' && str[i] != '+')
			return (0);
		else if (str[i] == '-')
			minus++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = n * 10 + str[i] - 48;
		i++;
	}
	return (n * sign(minus));
}

int	main()
{
	char *str = "   	\r \v ------------123";
	printf("%d\n",ft_atoi(str));
} 

