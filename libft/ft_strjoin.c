/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 12:13:49 by mwright           #+#    #+#             */
/*   Updated: 2017/01/08 13:05:04 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	size_t	i;
	size_t	b;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	a = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	b = ft_strlen(s1);
	if (a)
	{
		ft_strcpy(a, (char *)s1);
		i = 0;
		while (s2[i] != 0)
		{
			a[b] = s2[i];
			b++;
			i++;
		}
		return (a);
	}
	return (0);
}
