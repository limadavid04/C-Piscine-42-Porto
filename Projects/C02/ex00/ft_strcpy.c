/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:55:58 by dlima             #+#    #+#             */
/*   Updated: 2022/07/22 15:14:12 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main()
{
	char nome[10] = "David Lima";
	char *nome2 = "jghjkdhg";
	
	//printf("%s", strcpy(nome, nome2));
	//printf("%s",ft_strcpy(nome, nome2));
	
}
*/
