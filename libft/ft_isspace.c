/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:08:54 by mwright           #+#    #+#             */
/*   Updated: 2016/11/19 21:51:52 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	if ((unsigned char)c == '\t' || (unsigned char)c == '\n' ||
		(unsigned char)c == '\v' || (unsigned char)c == '\f' ||
		(unsigned char)c == '\r' || (unsigned char)c == ' ')
		return (1);
	else
		return (0);
}
