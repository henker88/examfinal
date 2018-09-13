/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:05:37 by sgendry           #+#    #+#             */
/*   Updated: 2018/09/13 12:20:19 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		unio(char *str, char c, int j)
{
	int i;

	i = 0;
	while (i < j)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i;
	int k;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (unio(argv[1], argv[1][i], i))
			{
				ft_putchar(argv[1][i]);
			}
			i++;
		}
		k = 0;
		while (argv[2][k])
		{
			if (unio(argv[1], argv[2][k], i) && unio(argv[2], argv[2][k], k))
			{
				ft_putchar(argv[2][k]);
			}
			k++;
		}
	}
	ft_putchar('\n');
	return (0);
}
