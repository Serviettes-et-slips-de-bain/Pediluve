/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 06:01:04 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/02 06:41:47 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && i < n)
		i++;
	return (s1[i] - s2[i]);
}
