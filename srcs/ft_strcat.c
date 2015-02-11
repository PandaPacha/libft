/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:39:54 by mafagot           #+#    #+#             */
/*   Updated: 2014/11/08 16:07:30 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	ln;

	i = 0;
	ln = ft_strlen(s1);
	while (s2[i])
	{
		s1[ln + i] = s2[i];
		i++;
	}
	s1[ln + i] = '\0';
	return (s1);
}
