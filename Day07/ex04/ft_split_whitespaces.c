/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 15:03:23 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/16 15:03:25 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_nbmot(char *str)
{
	int i;
	int nbmot;

	i = 0;
	nbmot = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	if (str[i] == '\0')
		nbmot = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\t' &&
				str[i + 1] != '\n' && str[i + 1] != '\0')
				nbmot++;
		}
		i++;
	}
	return (nbmot);
}

int		*ft_begin(char *str, int nbmot)
{
	int i;
	int *start;
	int j;

	i = 0;
	j = 0;
	start = (int *)malloc(nbmot * sizeof(int));
	if (str[0] != ' ' && str[0] != '\t' && str[0] != '\n')
	{
		start[j] = i;
		j++;
		i++;
	}
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			&& (str[i + 1] != ' ' && str[i + 1] != '\t'
			&& str[i + 1] != '\n' && str[i + 1] != '\0'))
		{
			start[j] = i + 1;
			j++;
		}
		i++;
	}
	return (start);
}

int		*ft_end(char *str, int *start, int nbmot)
{
	int i;
	int j;
	int c;
	int *end;

	if (nbmot == 0)
		return (0);
	end = (int *)malloc((2 * nbmot) * sizeof(int));
	j = 0;
	c = 0;
	while (j < 2 * nbmot)
	{
		end[j] = start[c];
		j++;
		i = end[j - 1];
		while ((str[i] != ' ' && str[i] != '\t'
			&& str[i] != '\n' && str[i] != '\0'))
			i++;
		end[j] = i - 1;
		j++;
		c++;
	}
	return (end);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		j;
	int		*ind;
	char	*word;
	int		i;

	i = 0;
	j = 0;
	tab = (char **)malloc((ft_nbmot(str) + 1) * sizeof(char *));
	ind = ft_end(str, ft_begin(str, ft_nbmot(str)), ft_nbmot(str));
	while (i < ft_nbmot(str))
	{
		word = (char *)malloc((ind[2 * i + 1] - ind[2 * i] + 1) * sizeof(char));
		j = 0;
		while (j < (ind[2 * i + 1] - ind[2 * i] + 1))
		{
			word[j] = str[ind[2 * i] + j];
			j++;
		}
		word[j] = '\0';
		tab[i] = word;
		i++;
	}
	tab[i] = (void *)0;
	return (tab);
}
