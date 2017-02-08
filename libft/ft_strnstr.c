/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:22:07 by mwright           #+#    #+#             */
/*   Updated: 2016/11/20 19:02:18 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t tlen;

	i = 0;
	tlen = ft_strlen(little);
	if (len == 0 && len >= tlen)
		return ((char*)big);
	if (*big == 0)
	{
		while (*big++ != 0)
			big = little;
	}
	if (tlen > len)
		return (NULL);
	while ((len >= tlen) && *big != 0)
	{
		len--;
		if (ft_strncmp(big, little, tlen) == 0)
			return ((char*)big);
		big++;
	}
	return (0);
}
