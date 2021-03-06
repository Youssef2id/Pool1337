/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 23:57:36 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/05 23:57:40 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 1;
	while (sqrt <= (nb / 2))
	{
		if (nb == sqrt * sqrt)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
