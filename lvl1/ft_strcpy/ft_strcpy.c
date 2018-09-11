/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 20:40:07 by sgendry           #+#    #+#             */
/*   Updated: 2018/09/10 20:57:03 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return (s1);
}

int		main(void)
{
	char s1[8] = "kekgggg";
char	s2[8] = "hei";
ft_strcpy(s1, s2);
	printf("%s", s1);
}
