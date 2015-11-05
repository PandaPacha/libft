/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:14:53 by mafagot           #+#    #+#             */
/*   Updated: 2015/10/29 08:43:57 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	char	*tmp;

	dup = NULL;
	if (s1)
	{
		if (!(dup = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
			return (NULL);
		tmp = dup;
		while (*s1)
		{
			*tmp = *s1;
			tmp++;
			s1++;
		}
		*tmp = '\0';
	}
	return (dup);
}
