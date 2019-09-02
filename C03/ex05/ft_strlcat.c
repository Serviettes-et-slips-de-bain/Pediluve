/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 06:29:15 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/02 06:48:59 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (size > 0)
	{
		while (dest[i])
			i++;
		while (src[j] && j < (size - i - 1))
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j + 1] = '\0';
	}
	return (i + j);
}
