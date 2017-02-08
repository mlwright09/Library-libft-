/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:20:43 by mwright           #+#    #+#             */
/*   Updated: 2016/12/22 03:53:34 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(int n)
{
	size_t c;

	c = 0;
	if (n < 0)
	{
		n *= -1;
	}
	while (n > 0)
	{
		c++;
		n = n / 10;
	}
	return (c);
}

static char	*ft_iszero(char *a, int n)
{
	if (n == 0)
	{
		a[0] = '0';
		a[1] = '\0';
	}
	return (a);
}

static char	*ft_result(char *a, int n, size_t i, int isneg)
{
	size_t j;

	j = 0;
	while (n != 0)
	{
		a[j] = (n % 10) + '0';
		n = n / 10;
		j++;
	}
	if (isneg == 1)
		a[i] = '-';
	return (a);
}

char		*ft_itoa(int n)
{
	char			*a;
	size_t			i;
	unsigned int	isneg;

	isneg = 0;
	i = ft_digits(n);
	a = ft_strnew(i + 1);
	if (!a)
		return (NULL);
	ft_iszero(a, n);
	if (n == -2147483648)
	{
		a = ft_strnew(ft_strlen("-2147483648"));
		return (ft_strcpy(a, "-2147483648\0"));
	}
	if (n < 0)
	{
		isneg = 1;
		n *= -1;
	}
	ft_result(a, n, i, isneg);
	ft_reverse(a);
	a[ft_strlen(a) + 1] = '\0';
	return (a);
}
