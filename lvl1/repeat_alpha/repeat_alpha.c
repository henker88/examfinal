/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 12:00:42 by sgendry           #+#    #+#             */
/*   Updated: 2018/09/11 12:16:07 by sgendry          ###   ########.fr       */
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
	int j;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				j = 0;
				while (j < argv[1][i] - 'a')
				{
					ft_putchar(argv[1][i]);
					j++;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				j = 0;
				while (j < argv[1][i] - 'A')
				{
					ft_putchar(argv[1][i]);
					j++;
				}
			}
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
