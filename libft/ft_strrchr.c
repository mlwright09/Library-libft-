/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:49:41 by mwright           #+#    #+#             */
/*   Updated: 2016/11/14 16:42:49 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		t;
	int		i;

	i = 0;
	t = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			t = i;
		i++;
	}
	if ((char)s[i] == (char)c)
		t = i;
	if (s[t] == (char)c)
		return ((char*)&s[t]);
	else
		return (NULL);
}
