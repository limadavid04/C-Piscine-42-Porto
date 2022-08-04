/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:02:47 by dlima             #+#    #+#             */
/*   Updated: 2022/08/02 16:55:44 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_chars(char **strs, int size)
{
	int	i;
	int	j;
	int	n;

	n = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			j++;
		n += j;
		i++;
	}
	return (n);
}

int	count_sep(char *sep, int size)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	return (i * (size - 1));
}

int	populate_sep(char *str, char *sep, int len)
{
	int	x;

	x = 0;
	while (sep[x])
	{
		str[len] = sep[x];
		x++;
		len++;
	}
	return (len);
}

char	*populate_strs(char *str, char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[len] = strs[i][j];
			j++;
			len++;
		}
		if (i < (size -1))
			len = populate_sep(str, sep, len);
		if (i == size -1)
			str[len] = '\0';
		i++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total;
	char	*str;

	if (size == 0)
	{
		str = malloc(1);
		return (str);
	}
	total = count_sep(sep, size) + count_chars(strs, size);
	str = (char *)malloc(total * sizeof(char) + 1);
	return (populate_strs(str, strs, size, sep));
}
/*
int main()
{
    char *strs[6] = {"david", "ferreira", "sousa", "lima", "joao", "joel"};
    char *sep = "--";
    printf("%s\n", ft_strjoin(6, strs, sep));
}
*/
