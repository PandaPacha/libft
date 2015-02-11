/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:41:21 by mafagot           #+#    #+#             */
/*   Updated: 2014/11/03 16:41:22 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len2;

	i = 0;
	len2 = ft_strlen(s2);
	if (len2 == 0)
		return ((char *)s1);
	while (s1[i] && n-- >= len2)
	{
		if (s1[i] == s2[0] && ft_strncmp((const char*)(s1 + i), s2, len2) == 0)
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
