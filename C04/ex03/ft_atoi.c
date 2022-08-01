/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:59:27 by dlima             #+#    #+#             */
/*   Updated: 2022/07/25 14:12:00 by dlima            ###   ########.fr       */
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

int	res(char *str, int len)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (i < len)
	{
		n = n * 10 + str[i] - 48;
		i++;
	}
	return (n);
}

int	ft_atoi(char *str)
{
	int	minus;
	int	i;
	int	len;

	minus = 0;
	i = 0;
	len = 0;
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
	while (str[i + len] >= 48 && str[i + len] <= 57)
	{
		len++;
	}
	return (res(&str[i], len) * sign(minus));
}
/*
int	main()
{
	char *str = "   	\r \v -------------123";
	printf("%d\n",ft_atoi(str));
} 
*/
