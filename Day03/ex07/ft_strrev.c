/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 10:05:58 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/04 10:06:01 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while ((*str) != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int		first;
	int		last;
	char	temp;

	last = ft_strlen(str) - 1;
	first = 0;
	while (last > first)
	{
		temp = str[last];
		str[last] = str[first];
		str[first] = temp;
		last--;
		first++;
	}
	return (str);
}
