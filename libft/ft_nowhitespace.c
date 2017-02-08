/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nowhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:35:05 by mwright           #+#    #+#             */
/*   Updated: 2016/11/09 12:14:40 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_nowhitespace(char const *s)
{
	char	*a;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	a = (char*)malloc(sizeof(char) * (ft_strlen(s)));
	if (!a)
		return (NULL);
	while (i < ft_strlen(s))
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		else
		{
			a[j] = s[i];
			i++;
			j++;
		}
	}
	a[j] = '\0';
	return (a);
}
