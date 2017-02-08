/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:34:08 by mwright           #+#    #+#             */
/*   Updated: 2016/11/09 18:43:27 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*t;
	int		i;

	i = 0;
	t = ft_strnew(len);
	if (!s)
		return (NULL);
	if (!t)
		return (NULL);
	while (len)
	{
		t[i] = s[start];
		start++;
		i++;
		len--;
	}
	t[i] = '\0';
	return (t);
}
