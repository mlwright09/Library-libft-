/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <mlwright09@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 19:00:56 by mwright           #+#    #+#             */
/*   Updated: 2017/02/07 16:15:36 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				i;
	unsigned int	b;
	int				sign;

	i = 0;
	b = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != 0)
	{
		if (!ft_isdigit(str[i]))
			break ;
		if (ft_isdigit(str[i]))
			b = b * 10 + str[i] - '0';
		i++;
	}
	return (b * sign);
}
