/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:47:32 by mwright           #+#    #+#             */
/*   Updated: 2016/11/10 21:09:25 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*b;
	size_t	i;
	size_t	spaces;
	size_t	start;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	spaces = i;
	start = i;
	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		spaces++;
		i--;
	}
	if (spaces >= ft_strlen(s))
		return (ft_strnew(0));
	b = ft_strnew(ft_strlen(s) - spaces);
	if (b)
		return (ft_strncpy(b, &s[start], ft_strlen(s) - spaces));
	return (NULL);
}
