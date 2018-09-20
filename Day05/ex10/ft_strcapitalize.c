/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:35:03 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/12 14:35:04 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	str = ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i - 1 == -1)
			{
				str[i] = str[i] - 32;
				i++;
			}
			if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				i++;
			if ((str[i - 1] < 'a' || str[i - 1] > 'z') &&
				(str[i - 1] < '0' || str[i - 1] > '9'))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
