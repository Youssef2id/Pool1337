/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:52:46 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/05 16:52:50 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb >= 0 && nb < 13)
	{
		if (nb == 0)
		{
			return (1);
		}
		while (nb > 0)
		{
			fact = fact * (nb);
			nb--;
		}
		return (fact);
	}
	return (0);
}
