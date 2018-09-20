/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 17:25:45 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/02 17:25:49 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_size(int n)
{
	int c;

	c = 1;
	while ((n / 10) != 0)
	{
		c++;
		n = n / 10;
	}
	return (c);
}

int		ft_power(int n, int p)
{
	if (p != 0)
	{
		return (n * ft_power(n, p - 1));
	}
	else
	{
		return (1);
	}
}

void	ft_min(int *nb, int *min)
{
	if (*nb < 0)
	{
		ft_putchar('-');
		if (*nb == -2147483648)
		{
			*nb = *nb + 1;
			*min = 1;
		}
		*nb = *nb * (-1);
	}
}

void	ft_putnbr(int nb)
{
	int s;
	int p;
	int d;
	int min;

	s = ft_size(nb);
	while (s > 0)
	{
		ft_min(&nb, &min);
		p = ft_power(10, s - 1);
		d = nb;
		nb = nb / p;
		s--;
		if (s != 0)
			ft_putchar('0' + nb);
		nb = (d % p);
		if (s == 0)
		{
			if (min == 1)
				d++;
			ft_putchar('0' + d);
		}
	}
}
