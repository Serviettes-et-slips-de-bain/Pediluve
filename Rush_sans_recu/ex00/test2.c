/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sothomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:13:46 by sothomas          #+#    #+#             */
/*   Updated: 2019/09/07 16:01:41 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		test_line(int tab[5][5], int x, int y)
{
	int i;

	i = 1;
	while (i < y)
	{
		if (tab[x][y] == tab[x][i])
			return (0);
		i++;
	}
	return (1);
}

int		test_column(int tab[5][5], int x, int y)
{
	int i;

	i = 1;
	while (i < x)
	{
		if (tab[x][y] == tab[i][y])
			return (0);
		i++;
	}
	return (1);
}
