/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:50:21 by mafagot           #+#    #+#             */
/*   Updated: 2014/11/08 16:12:01 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

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
