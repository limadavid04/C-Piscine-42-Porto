/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:58:58 by dlima             #+#    #+#             */
/*   Updated: 2022/07/21 22:03:29 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 1;
		if (str[i] == to_find[0])
		{	
			x = 1;
			while (to_find[j] != '\0')
			{
				if (str[i + j] != to_find[j])
					x = 0;
				j++;
			}
			if (x)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	a[90] = "Test story start strong string", b[] = "str";
	char	c[] = "", d[90] = "Your life";
	char	e[90] = "i";
	printf("ft_strstr\n");
	printf("'%s' should be '%s' \n", ft_strstr(a, b),
		strstr(a, b));
	printf("'%s' should be '%s' \n", ft_strstr(d, c),
		strstr(d, c));
	printf("'%s' should be '%s' \n", ft_strstr(d, b),
		strstr(d, b));
	printf("'%s' should be '%s' \n", ft_strstr(d, e),
		strstr(d, e));
	return (0);
}
*/
