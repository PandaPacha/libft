/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:48:17 by mafagot           #+#    #+#             */
/*   Updated: 2014/11/21 15:30:43 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *tmp;

	if (len == 0)
		return (b);
	tmp = (unsigned char *)b;
	while (len--)
		*tmp++ = (unsigned char)c;
	return (b);
}
