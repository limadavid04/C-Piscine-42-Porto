/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:11:28 by dlima             #+#    #+#             */
/*   Updated: 2022/07/21 19:57:44 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	dest_len(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	len = dest_len(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
int 	main()
{
	char	dest[15] = "David";
	char	src[] = "Lima";
	unsigned int	nb = 17;

	printf("%s\n", ft_strncat(dest,src, nb));
	
	char    dest1[15] = "David";
        char    src1[] = "Lima";
        unsigned int    nb1 = 17;
	
	printf("%s\n", strncat(dest1, src1, nb1));
}
*/
