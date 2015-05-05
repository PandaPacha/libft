/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:50:21 by mafagot           #+#    #+#             */
/*   Updated: 2015/05/05 15:45:11 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	beg;
	size_t	end;
	size_t	len;
	char	*str;

	if (s == NULL)
		return (NULL);
	end = 0;
	beg = 0;
	len = ft_strlen(s);
	while (ft_isspace(s[beg]))
		beg++;
	while (ft_isspace(s[len - end - 1]))
		end++;
	if (beg == len)
		end = 0;
	str = (char *)malloc(sizeof(char) * (len - beg - end + 1));
	if (!str)
		return (NULL);
	str = ft_strncpy(str, s + beg, len - beg - end);
	str[len - beg - end] = '\0';
	return (str);
}
