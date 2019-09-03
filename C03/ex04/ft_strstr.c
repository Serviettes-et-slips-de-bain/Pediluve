/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 06:22:41 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/02 07:49:27 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	while (*str && to_find[i])
	{
		i = 0;
		while (str[i] == to_find[i])
			i++;
		str++;
	}
	return (str);
}
