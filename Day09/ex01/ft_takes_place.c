/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 16:51:04 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/06 16:51:07 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_convert(int *hour)
{
	char m;

	m = ' ';
	if ((*hour >= 00 && *hour < 12) || *hour == 24)
	{
		if (*hour == 00 || *hour == 24)
			*hour = 12;
		m = 'A';
	}
	else if (*hour >= 12 && *hour < 24)
	{
		if (*hour == 12)
			*hour = 12;
		else
			*hour = *hour - 12;
		m = 'P';
	}
	return (m);
}

void	ft_takes_place(int hour)
{
	char	m1;
	char	m2;
	int		h2;

	if (hour < 24)
		h2 = hour + 1;
	else
		h2 = 01;
	m1 = ' ';
	m2 = ' ';
	m1 = ft_convert(&hour);
	m2 = ft_convert(&h2);
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %c.M. AND %d.00 %c.M.\n", hour, m1, h2, m2);
}
