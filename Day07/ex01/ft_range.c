/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:11:09 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/15 14:11:11 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int len;
	int *tab;
	int i;
	int j;

	if (min < max)
	{
		j = 0;
		i = min;
		len = max - min - 1;
		tab = (int *)malloc(len * sizeof(tab));
		while (j <= len)
		{
			tab[j] = i;
			i++;
			j++;
		}
		return (tab);
	}
	else
		return ((void*)0);
}
