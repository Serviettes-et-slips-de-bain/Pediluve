/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 18:15:32 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/02 19:00:33 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int res;
	unsigned int i;

	res = 0;
	i = 0;
	while (src[res])
	{
		while (i < size)
		{
			dest[i] = src[i];
			i++;
		}
		if (res == i + 1)
			dest[res] = '\0';
		res++;
	}
	return (res);
}
