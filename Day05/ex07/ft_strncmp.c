/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:23:51 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/12 12:23:54 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_cmp(unsigned int *tb, char *s1, char *s2)
{
	tb[2] = s1[tb[0]] - s2[tb[1]];
	tb[0] += 1;
	tb[1] += 1;
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int tb[3];

	tb[0] = 0;
	tb[1] = 0;
	if (s1[tb[0]] == '\0' && s2[tb[1]] == '\0')
		return (0);
	while ((s1[tb[0]] != '\0' || s2[tb[1]] != '\0') && (tb[0] < n && tb[1] < n))
	{
		if (s1[tb[0]] == s2[tb[1]])
			ft_cmp(tb, s1, s2);
		if (s1[tb[0]] != s2[tb[1]] && (tb[0] < n && tb[1] < n))
		{
			ft_cmp(tb, s1, s2);
			break ;
		}
	}
	return (tb[2]);
}
