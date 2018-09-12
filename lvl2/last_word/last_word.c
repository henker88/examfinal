/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 13:49:01 by sgendry           #+#    #+#             */
/*   Updated: 2018/09/12 16:29:30 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' && argv[1][i + 1] >= 33 && argv[1][i + 1] <= 127)
				j = i + 1;
			i++;
		}
		while (argv[1][j] >= 33 && argv[1][j] <= 127)
		{
			ft_putchar(argv[1][j]);
			j++;
		}
	}
	ft_putchar('\n');
	return (0);
}
