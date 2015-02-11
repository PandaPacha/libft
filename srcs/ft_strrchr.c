/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:40:52 by mafagot           #+#    #+#             */
/*   Updated: 2014/11/13 12:23:34 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned int	ln;
	unsigned int	i;

	str = (char *)s;
	ln = ft_strlen(s);
	i = 1;
	if (c == 0)
		return (str + ln);
	while (i <= ln)
	{
		if (str[ln - i] == c)
			return (str + ln - i);
		i++;
	}
	return (NULL);
}
