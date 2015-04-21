/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 11:29:02 by mafagot           #+#    #+#             */
/*   Updated: 2015/01/06 11:29:07 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;

	if (!alst || !*alst)
		return ;
	ptr = *alst;
	if (ptr->content)
		del(ptr->content, ptr->content_size);
	ft_memdel((void**)alst);
}
