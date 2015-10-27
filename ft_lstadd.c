/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 11:29:34 by mafagot           #+#    #+#             */
/*   Updated: 2015/10/27 18:26:09 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd(t_list **alst, t_list *new)
{
	if (new)
	{
		if (!(*alst))
			new->next = NULL;
		new->next = *alst;
		*alst = new;
	}
}
