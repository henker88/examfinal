/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 18:31:04 by sgendry           #+#    #+#             */
/*   Updated: 2018/09/11 18:44:04 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, str, 1);
		str++;
	}
}

int		main(void)
{
	char str[128] = "tes0";
	ft_putstr(str);
//	printf("%s", str);
}
