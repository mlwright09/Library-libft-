/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 22:23:15 by mwright           #+#    #+#             */
/*   Updated: 2016/11/16 22:36:52 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *addy;

	addy = *alst;
	if (addy)
	{
		del(addy->content, addy->content_size);
		del(addy->next, addy->content_size);
		free(*alst);
		*alst = NULL;
	}
}
