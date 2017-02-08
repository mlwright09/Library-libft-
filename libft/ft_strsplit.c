/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:16:28 by mwright           #+#    #+#             */
/*   Updated: 2016/11/19 21:50:57 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *str, char c)
{
	int i;
	int count;

	i = 0;
	if (str[i] == c)
		count = 0;
	else
		count = 1;
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static int	ft_wordlength(const char *str, char c)
{
	int len;

	len = 0;
	while (str[len] != '\0' && str[len] != c)
		len++;
	return (len);
}

char		**ft_strsplit(const char *s, char c)
{
	char	**array;
	int		count;
	int		emp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	emp = ft_strcmp(s, "");
	count = ft_wordcount(s, c);
	array = (char**)malloc(sizeof(char*) * (count + 1));
	if (!array)
		return (NULL);
	while (i < count && emp != 0)
	{
		while (s[j] == c)
			j++;
		array[i] = ft_strsub(s, j, ft_wordlength(&s[j], c));
		j += ft_wordlength(&s[j], c);
		i++;
	}
	array[i] = NULL;
	return (array);
}
