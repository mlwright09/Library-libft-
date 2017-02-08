/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printallatoi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 00:21:04 by mwright           #+#    #+#             */
/*   Updated: 2016/11/20 21:12:57 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_printallatoi(const char *str)
{
	int i;
	int b;
	int sign;

	i = 0;
	b = 0;
	sign = 1;
	if (!*str)
		return (0);
	while ((str[i] > '\0'))
	{
		if (ft_isdigit(str[i] == 0) && ft_isdigit(str[i + 1]) == 0)
			break ;
		if (str[i] == '-')
			sign = -1;
		if (ft_isdigit(str[i]))
			b = b * 10 + str[i] - '0';
		i++;
	}
	return (b * sign);
}
