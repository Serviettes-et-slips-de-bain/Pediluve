/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 19:29:17 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/02 21:52:14 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest1[7];
	char dest2[7];
	printf("%s", ft_strncpy(dest1, "abcde", 5));
	printf("%s", strncpy(dest2, "abcde", 5));
	return (0);
}
