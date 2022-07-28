/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:21:25 by dlima             #+#    #+#             */
/*   Updated: 2022/07/25 14:46:36 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
	
void	base10(char *nbr)
{	
	if (nbr == "-2147483648")
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nbr = 147483648;
	}
	
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	else if (nbr >= 10)
	{
		base10(nbr / 10);
		nbr = nbr % 10 + 48;
	}
	else if (nbr < 10)
		write(1, &nbr, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{


	if (base == "0123456789")
		write()
/*
	else if (base == "01")
		base2(nbr);
	else if (base == "0123456789ABCDEF")
		base16(nbr);
	else if (base == "poneyvif")
		base8(nbr);
		*/
}

int	main()
{
	char	*base = "0123456789";
	ft_putnbr_base(32, base);
}
