/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 10:38:23 by dlima             #+#    #+#             */
/*   Updated: 2022/08/04 10:54:24 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	verify_dup(char *arr, char a,int n)
{	
	int j;
	
	j = 0;
	while (j < n)
	{
		if (arr[j] == a)
			return (0);
		j++;
	}
	arr[n] = a;
	return (1);
}

void	ft_union2(char *str2, char *arr, int n)
{
	int	i;

	i = 0;
	while (str2[i])
	{
		if (verify_dup(arr, str2[i], n))
		{
			write(1, &str2[i], 1);
			n++;
		}
		i++;
	}
}
void    ft_union(char *str1, char *str2)
{
	int	i;
	char	arr[128];
	int	n;
	
	i = 0;
	n = 0;
	while (str1[i])
	{
		if (verify_dup(arr, str1[i], n))
		{
			write(1, &str1[i], 1);
			n++;
		}
		i++;
	}
	ft_union2(str2, arr, n);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	else
	{
		ft_union(argv[1], argv[2]);
	}
}
