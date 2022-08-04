/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:06:34 by dlima             #+#    #+#             */
/*   Updated: 2022/08/04 16:49:51 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int ft_is_delimiter(char c)
{
    if (c == ' ' || c == '\t' || c == '\n' || c == 0)
        return (1);
    return (0);
}
char    **ft_split(char *str)
{
	int	i;
	int	j;
	char **arr;
	int	count;
	int	n;
	int	x;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (ft_is_delimiter(str[i]))
			i++;
		while (!ft_is_delimiter(str[i]))
			i++;
		count++;
		i++;
	}
	arr = malloc(sizeof(char) * count);
	i = 0;
	count = 0;
	while  (str[i])
	{
		n = 0;
        while (ft_is_delimiter(str[i]))
                i++;
        while (!ft_is_delimiter(str[i]))
		{
			n++;
			i++;
		}
		arr[count] = (char *)malloc(sizeof(char) * (n + 1));
		count++;
		i++;
	}
	i = 0;
	count = 0;
	while (str[i])
	{
        while (ft_is_delimiter(str[i]))
                i++;
		x = 0;
        while (!ft_is_delimiter(str[i]))
		{
			arr[count][x] = str[i];
			i++;
			x++;
		}
		arr[count][x] = '\0';
		count++;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int j;

	i = 0;
	char **res;
	res = ft_split(argv[1]);

	while (i < argc)
	{
		j = 0;
		while (res[i][j])
		{
			write (1, &res[i][j], 1);
			j++;
		}
		i++;
	}
}