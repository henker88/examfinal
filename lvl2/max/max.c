/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:20:04 by sgendry           #+#    #+#             */
/*   Updated: 2018/09/12 17:40:25 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		max(int *tab, unsigned int len)
{
	unsigned int i;
	int kmax;

	i = 0;
	if(!tab)
		return (0);
	kmax = tab[0];
	while (i < len)
	{
		if (tab[i] > kmax)
			kmax = tab[i];
		i++;
	}
	return(kmax);
}

int main(void)
{
	int	tab[6] = {1,9,3,4,5,6};

	printf("%d", max(tab, 3));
	return (0);
}
