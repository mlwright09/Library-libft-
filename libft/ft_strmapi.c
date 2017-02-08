/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:20:33 by mwright           #+#    #+#             */
/*   Updated: 2016/11/23 16:38:10 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	char	*t;

	if (!s)
		return (NULL);
	i = 0;
	t = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (t)
	{
		while (s[i] != 0)
		{
			t[i] = f(i, s[i]);
			i++;
		}
		t[i] = '\0';
		return (t);
	}
	return (NULL);
}
