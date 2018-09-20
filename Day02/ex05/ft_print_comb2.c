/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 18:45:49 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/01 18:45:53 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar_4_terms(char i, char j, char k, char l)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(' ');
	ft_putchar(k);
	ft_putchar(l);
	if (i != '9' || j != '8' || k != '9' || l != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_comparer(int i, int j, int k, int l)
{
	if (i < k)
	{
		ft_putchar_4_terms('0' + i, '0' + j, '0' + k, '0' + l);
	}
	if (i == k && j < l)
	{
		ft_putchar_4_terms('0' + i, '0' + j, '0' + k, '0' + l);
	}
}

void	ft_while(int i, int j, int k, int l)
{
	while (i <= 9)
	{
		while (j <= 9)
		{
			while (k <= 9)
			{
				while (l <= 9)
				{
					ft_comparer(i, j, k, l);
					l++;
				}
				l = 0;
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 0;
	k = 0;
	l = 1;
	ft_while(i, j, k, l);
}
