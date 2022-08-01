/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:14:32 by dlima             #+#    #+#             */
/*   Updated: 2022/07/22 15:06:30 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>

int	get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;

	len_dest = get_len(dest);
	i = 0;
	if (size <= get)
	while (src[i] != '\0' && i < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + get_len(src));
}
/*
int	main()
{
	char	src[10] = "ABCDEF";
	char	dest[30] = "GHIJKL";
	int	size = 16;

	printf("My function:%d\n dest: %s\n", ft_strlcat(dest, src, size), dest);
	
	char	dest1[6] = "GHIJKL";

	printf("Other Function:%ld\n dest :%s\n", strlcat(dest1, src, size), dest1);
}
*/
