/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:38:41 by mafagot           #+#    #+#             */
/*   Updated: 2014/11/03 16:38:43 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	if (s1 == s2 || n == 0)
		return (0);
	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	i = 0;
	while (i < n - 1)
	{
		if (tmp1[i] == tmp2[i])
			i++;
		else
			return (tmp1[i] - tmp2[i]);
	}
	return (tmp1[i] - tmp2[i]);
}
