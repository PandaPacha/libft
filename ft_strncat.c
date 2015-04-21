/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:40:05 by mafagot           #+#    #+#             */
/*   Updated: 2014/11/11 16:04:48 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	ln;

	i = 0;
	ln = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[ln + i] = s2[i];
		i++;
	}
	s1[ln + i] = '\0';
	return (s1);
}
