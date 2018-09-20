/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:29:07 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/15 16:29:09 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_push(char *cat, char *argv[], int argc)
{
	int i;
	int j;
	int len;

	i = 1;
	j = 0;
	while (i < argc)
	{
		len = 0;
		while (argv[i][len] != '\0')
		{
			cat[j] = argv[i][len];
			len++;
			j++;
		}
		cat[j] = '\n';
		j++;
		i++;
	}
	cat[j - 1] = '\0';
}

char	*ft_concat_params(int argc, char **argv)
{
	int		len;
	int		i;
	int		j;
	char	*cat;

	i = 1;
	len = 0;
	j = 0;
	while (i < argc)
	{
		len = ft_strlen(argv[i]) + 1 + len;
		i++;
	}
	cat = (char *)malloc(len * sizeof(cat));
	ft_push(cat, argv, argc);
	return (cat);
}
