/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:07:07 by dlima             #+#    #+#             */
/*   Updated: 2022/07/21 12:12:38 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

int	sizecalc(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}	
		dest[i] = '\0';
	}
	return (sizecalc(src));
}
/*
int	main()
{
	char	in[] = "daaaarr";
	char	out[] = "afsudgusfgusadfgaus";
	int		size = 0;

	printf("%d\n%s\n", ft_strlcpy(out, in, size), out);

	char	in2[] = "daaaarr";
	char	out2[] = "afsudgusfgusadfgaus";
	int		size2 = 0;

	printf("%ld\n%s\n", strlcpy(out2, in2, size2), out2);
}
*/
