/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 20:38:48 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/10 20:41:17 by yidabdes         ###   ########.fr       */
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
	ft_putchar('\n');
}

void	ft_cmp(int *tb, char *s1, char *s2)
{
	tb[2] = s1[tb[0]] - s2[tb[1]];
	tb[0] += 1;
	tb[1] += 1;
}

int		ft_strcmp(char *s1, char *s2)
{
	int tb[3];

	tb[0] = 0;
	tb[1] = 0;
	while (s1[tb[0]] != '\0' || s2[tb[1]] != '\0')
	{
		if (s1[tb[0]] == s2[tb[1]])
			ft_cmp(tb, s1, s2);
		if (s1[tb[0]] != s2[tb[1]])
		{
			ft_cmp(tb, s1, s2);
			break ;
		}
	}
	return (tb[2]);
}

void	ft_swapstr(char **str1, char **str2)
{
	char *temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int		main(int argc, char *argv[])
{
	int i;
	int j;
	int cmp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			cmp = ft_strcmp(argv[i], argv[j]);
			if (cmp > 0)
				ft_swapstr(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
