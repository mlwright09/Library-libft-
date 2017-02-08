/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 01:23:09 by mwright           #+#    #+#             */
/*   Updated: 2016/11/09 17:28:17 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *t;

	t = (char*)malloc(sizeof(char) * (size + 1));
	if (t)
	{
		ft_memset(t, 0, (size + 1));
		return (t);
	}
	return (NULL);
}
