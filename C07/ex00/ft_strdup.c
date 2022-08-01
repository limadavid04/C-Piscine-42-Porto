/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:17:13 by dlima             #+#    #+#             */
/*   Updated: 2022/07/28 14:56:43 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	res = (char *)malloc((i + 1) * sizeof(char));
	while (src[j])
	{
		res[j] = src[j];
		j++;
	}
	res[j] = '\0';
	return (res);
}
/*
int main()
{
	printf("%s\n", ft_strdup("ola bruninho"));
	return 0;
}
*/
