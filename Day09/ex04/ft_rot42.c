/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 21:09:15 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/06 21:09:20 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int strlen;

	strlen = 0;
	while (*str != '\0')
	{
		str++;
		strlen++;
	}
	return (strlen);
}

char	*ft_rot42(char *str)
{
	int strln;
	int i;
	int maj;
	int min;

	i = 0;
	strln = 0;
	strln = ft_strlen(str);
	while (i < strln)
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			maj = (((str[i] - 65 + 42) % 26) + 65);
			str[i] = maj;
		}
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			min = (((str[i] + 42 - 97) % 26) + 97);
			str[i] = min;
		}
		i++;
	}
	return (str);
}
