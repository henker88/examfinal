/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:22:58 by sgendry           #+#    #+#             */
/*   Updated: 2018/09/13 13:08:32 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int div;

	div = 128;
	while (div)
	{
		if (octet >= div)
		{
			ft_putchar('1');
			octet = octet - div;
		}
		else
			ft_putchar('0');
		div = div / 2;
	}
}

int	main(int ac, char **av)
{
	ac = 0;
	print_bits(av[1][0]);
	return (0);
}
