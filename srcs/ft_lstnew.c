/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 11:28:49 by mafagot           #+#    #+#             */
/*   Updated: 2015/01/06 11:28:52 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;
	void	*data;

	data = (void *)NULL;
	data = (void *)ft_memalloc(content_size);
	if (content == NULL)
	{
		data = NULL;
		content_size = 0;
	}
	else
		data = ft_memcpy(data, content, content_size);
	list = (t_list *)NULL;
	list = ft_memalloc(sizeof(t_list));
	if (list != (t_list *)NULL)
	{
		list->content_size = content_size;
		list->next = NULL;
		list->content = data;
	}
	return (list);
}
