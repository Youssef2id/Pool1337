/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 10:28:06 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/06 10:28:08 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int div;

	i = 3;
	div = nb / 2;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	if ((nb % 2) != 0)
	{
		while (((nb % i) != 0) && (i < div))
		{
			i = i + 2;
		}
		if ((nb % i) != 0)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
