/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 15:20:46 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/07 15:20:49 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	to_lower(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
}

int		str_length(char *str)
{
	int compt;

	compt = 0;
	while (str[compt] != '\0')
	{
		compt++;
	}
	return (compt);
}

int		ft_find(char *str, char str_find[])
{
	int	i;
	int	j;
	int	length;

	i = 0;
	to_lower(str);
	to_lower(str_find);
	length = str_length(str_find);
	while (str[i] == ' ')
		i++;
	j = i;
	while (str[i] == str_find[i - j] && i < j + length && str[i] != '\0')
		i++;
	if (i != j + length)
		return (0);
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] != ' ')
				return (0);
			i++;
		}
		return (1);
	}
}

void	ft_spy(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_find(argv[i], "president") ||
			ft_find(argv[i], "attack") || ft_find(argv[i], "bauer"))
		{
			write(1, "Alert!!!", 8);
			return ;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	ft_spy(argc, argv);
	return (0);
}
