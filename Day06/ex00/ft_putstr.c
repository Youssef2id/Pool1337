/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 23:07:21 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/03 23:07:25 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	char a;

	while (*str != '\0')
	{
		a = *str;
		ft_putchar(a);
		str++;
	}
}
