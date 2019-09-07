/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_columns_lines.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sothomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:13:06 by sothomas          #+#    #+#             */
/*   Updated: 2019/09/07 14:09:04 by sothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_column_up(int tab[5][5], int donnees[17])
{
	int max;
	int count;
	int position;
	int y;

	y = 1;
	while (y <= 4)
	{
		count = 1;
		position = 2;
		max = tab[1][y];
		while (position <= 4)
		{
			if (tab[position][y] > max)
			{
				max = tab[position][y];
				count++;
			}
			position++;
		}
		if (count != donnees[y])
			return (0);
		y++;
	}
	return (1);
}

int		ft_column_down(int tab[5][5], int donnees[17])
{
	int max;
	int count;
	int position;
	int y;

	y = 1;
	while (y <= 4)
	{
		count = 1;
		position = 3;
		max = tab[4][y];
		while (position >= 1)
		{
			if (tab[position][y] > max)
			{
				max = tab[position][y];
				count++;
			}
			position--;
		}
		if (count != donnees[y + 4])
			return (0);
		y++;
	}
	return (1);
}

int		ft_column_left(int tab[5][5], int donnees[17], int x)
{
	int max;
	int count;
	int position;

	count = 1;
	position = 2;
	max = tab[x][1];
	while (position <= 4)
	{
		if (tab[x][position] > max)
		{
			max = tab[x][position];
			count++;
		}
		position++;
	}
	if (count == donnees[x + 8])
		return (1);
	else
		return (0);
}

int		ft_column_right(int tab[5][5], int donnees[17], int x)
{
	int max;
	int count;
	int position;

	count = 1;
	position = 3;
	max = tab[x][4];
	while (position >= 1)
	{
		if (tab[x][position] > max)
		{
			max = tab[x][position];
			count++;
		}
		position--;
	}
	if (count == donnees[x + 12])
		return (1);
	else
		return (0);
}
