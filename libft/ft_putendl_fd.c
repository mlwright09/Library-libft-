/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 21:22:14 by mwright           #+#    #+#             */
/*   Updated: 2016/11/13 23:47:23 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int a;

	a = 0;
	if (!s)
		return ;
	while (s[a] != '\0')
	{
		ft_putchar_fd(s[a], fd);
		a++;
	}
	ft_putchar_fd('\n', fd);
}
