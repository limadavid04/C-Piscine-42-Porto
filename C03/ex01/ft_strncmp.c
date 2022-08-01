/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:19:37 by dlima             #+#    #+#             */
/*   Updated: 2022/07/22 15:02:25 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("ft_strncmp\n");
	printf("%d should be %d \n", ft_strncmp("ab", "a ", 1),
		strncmp("ab", "a ", 1));
	printf("%d should be %d\n", ft_strncmp("a     ", "a ", 10),
		strncmp("a     ", "a ", 10));
	printf("%d should be %d\n", ft_strncmp("a", "a      ", 10),
		strncmp("a", "a      ", 10));
	printf("%d should be %d \n", ft_strncmp("ab", "a ", 2),
		strncmp("ab", "a ", 2));
	printf("%d should be %d \n", ft_strncmp("A", "a", 1),
		strncmp("A", "a", 1));
	printf("%d should be %d \n", ft_strncmp("a", "a", 1),
		strncmp("a", "a", 1));
	return (0);
}
*/
