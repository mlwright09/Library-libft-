/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:03:01 by mwright           #+#    #+#             */
/*   Updated: 2016/11/11 00:00:55 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t n;

	n = ft_strlen(little);
	if (*little == '\0')
		return ((char*)big);
	while (*big)
	{
		if (ft_memcmp(big++, little, n) == 0)
			return ((char*)big - 1);
	}
	return (0);
}
