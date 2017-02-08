/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 23:21:11 by mwright           #+#    #+#             */
/*   Updated: 2016/11/17 21:08:17 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list *current;
	t_list *fresh;
	t_list *ret;

	if (!lst)
		return (NULL);
	current = lst;
	ret = NULL;
	fresh = f(current);
	if (!fresh)
		return (NULL);
	if (current->next != NULL)
		ret = ft_lstmap(current->next, f);
	fresh->next = ret;
	return (fresh);
}
