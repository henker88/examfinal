/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 13:27:35 by sgendry           #+#    #+#             */
/*   Updated: 2018/09/13 13:43:15 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int div;
	unsigned char i;

	div = 128;
	i = 0;
	while (div)
	{
		if (octet >= div)
		{
			if (div == 128)
				i++;
			else if (div == 64)
				i += 2;
			else if (div == 32)
				i += 4;
			else if (div == 16)
				i += 8;
			else if (div == 8)
				i += 16;
			else if (div == 4)
				i += 32;
			else if (div == 2)
				i += 64;
			else
				i += 128;
			octet = octet - div;
		}
		div = div / 2;
	}
	return (i);
}

int	main(void)
{
	unsigned char c;

	c = '&';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
