/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 00:28:10 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/02 18:56:23 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 122 || (str[i] > 90 && str[i] < 97))
			return (0);
		i++;
	}
	return (1);
}
