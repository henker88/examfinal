/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 19:27:48 by sgendry           #+#    #+#             */
/*   Updated: 2018/09/12 19:37:53 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
	{
		if (n == 1)
			return (1);
	}
	return (0);
}