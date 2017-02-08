/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 11:17:44 by mwright           #+#    #+#             */
/*   Updated: 2016/12/07 16:43:25 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int j;
	int g;

	j = 0;
	g = 0;
	while ((s1[j] != '\0' && s2[g] != '\0'))
	{
		if ((unsigned char)s1[j] != (unsigned char)s2[g])
			return ((unsigned char)s1[j] - (unsigned char)s2[g]);
		j++;
		g++;
	}
	if (s1[j] == s2[g])
		return (0);
	else
		return ((unsigned char)s1[j] - (unsigned char)s2[g]);
}
