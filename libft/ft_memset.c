/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 14:00:52 by mwright           #+#    #+#             */
/*   Updated: 2016/11/09 12:11:34 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	val;
	unsigned char	*be;
	size_t			i;

	i = 0;
	val = (unsigned char)c;
	be = b;
	while (i < len)
	{
		be[i] = val;
		i++;
	}
	return (be);
}
