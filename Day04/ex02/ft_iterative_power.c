/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 19:15:57 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/05 19:16:01 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int cpy;

	cpy = nb;
	if (power == 0)
	{
		return (1);
	}
	while ((power - 1) != 0)
	{
		nb = cpy * nb;
		power--;
	}
	return (nb);
}
