/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 18:53:54 by sgendry           #+#    #+#             */
/*   Updated: 2018/09/10 19:13:42 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		while (*argv[argc - 1])
		{
			ft_putchar(*argv[argc - 1]);
			(argv[argc - 1])++;
		}
	ft_putchar('\n');
	return (0);
}
