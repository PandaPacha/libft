/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:49:48 by mafagot           #+#    #+#             */
/*   Updated: 2014/11/03 16:49:49 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*tmp;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL && s2 != NULL)
			return (ft_strdup(s2));
		if (s1 != NULL && s2 == NULL)
			return (ft_strdup(s1));
		if (s1 == NULL && s2 == NULL)
			return (NULL);
	}
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!tmp)
		return (NULL);
	i = -1;
	while (s1[++i])
		tmp[i] = s1[i];
	j = -1;
	while (s2[++j])
		tmp[i++] = s2[j];
	tmp[i] = '\0';
	return (tmp);
}
