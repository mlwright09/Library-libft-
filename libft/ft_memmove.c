/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:52:21 by mwright           #+#    #+#             */
/*   Updated: 2016/11/20 17:30:30 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned const char	*s;
	unsigned char		*d;
	unsigned char		*t;
	size_t				i;

	s = src;
	d = dst;
	i = 0;
	t = 0;
	if (s >= d)
		return (ft_memcpy(d, s, len));
	s += len;
	d += len;
	while (len--)
		*--d = *--s;
	return (d);
}
