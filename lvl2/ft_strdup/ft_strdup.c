/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 10:16:36 by sgendry           #+#    #+#             */
/*   Updated: 2018/09/12 11:23:40 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char *s;
	int i;

	i = 0;
	while(src[i])
		i++;
	if (!(s = (char*)malloc(sizeof(char) * (i + 1))))
		return(NULL);
	s[i] = '\0';
	while (i >= 0)
	{
		s[i] = src[i];
		i--;
	}
	return(s);
}

int		main(void)
{
	char t[] = "strer";
	char *but;
	char *stur2;
	but = ft_strdup(t);
	stur2 = strdup(t);
	printf("%s\n", but);
	printf("%s\n", stur2);
	return (0);

}
