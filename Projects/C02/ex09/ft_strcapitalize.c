/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:55:25 by dlima             #+#    #+#             */
/*   Updated: 2022/07/20 17:26:59 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check(char c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90))
	{
		return (0);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] -= 32;
	}	
	i = 1;
	while (str[i] != '\0')
	{	
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (check(str[i - 1]))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
