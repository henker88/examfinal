/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 11:22:11 by sgendry           #+#    #+#             */
/*   Updated: 2018/09/13 12:04:57 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		inter(char *str, char c, int j)
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
			k = 0;
			while (argv[2][k])
			{
				if (argv[1][i] == argv[2][k] && inter(argv[1], argv[1][i], i))
				{
					ft_putchar(argv[1][i]);
					break ;
				}
				k++;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
