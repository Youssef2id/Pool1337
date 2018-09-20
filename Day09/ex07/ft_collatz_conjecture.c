/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 02:41:36 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/07 02:41:39 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base != 1)
	{
		if ((base % 2) == 0)
			base = base / 2;
		else
			base = 3 * base + 1;
		return (ft_collatz_conjecture(base) + 1);
	}
	else
		return (base - 1);
}
