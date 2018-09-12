/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:47:04 by sgendry           #+#    #+#             */
/*   Updated: 2018/09/12 17:18:12 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	char b;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				b = 'z' - argv[1][i] + 'a';
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				b = 'Z' - argv[1][i] + 'A';
			}
			else
				b = argv[1][i];
			ft_putchar(b);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
