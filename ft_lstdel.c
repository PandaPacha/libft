/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 11:29:20 by mafagot           #+#    #+#             */
/*   Updated: 2015/01/06 11:29:22 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*p_next;

	if (!alst || !*alst)
		return ;
	current = (*alst);
	p_next = current->next;
	ft_lstdelone(&current, del);
	if (p_next)
		ft_lstdel(&p_next, del);
	*alst = NULL;
}
