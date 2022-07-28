/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:25:32 by dlima             #+#    #+#             */
/*   Updated: 2022/07/21 13:45:47 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	hexa(int decnum)
{
	int	arr[2];
	int	rem;

	arr[0] = (decnum / 16) + 48;
	write(1, "\\", 1);
	write(1, &arr[0], 1);
	rem = decnum % 16;
	if (rem < 10)
		arr[1] = rem + 48;
	else
		arr[1] = rem + 87;
	write(1, &arr[1], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
			hexa(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char str[] = "Coucou\ntu vas bien ?";
	char str1[] = "ola meu \a \b";
	char str2[] = "\v";
	
	ft_putstr_non_printable(str);
	printf("\n");
	ft_putstr_non_printable(str1);
	printf("\n");
	ft_putstr_non_printable(str2);
}
*/
