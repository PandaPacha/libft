/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/31 11:23:25 by mafagot           #+#    #+#             */
/*   Updated: 2014/12/31 11:23:28 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_count_parts(char const *s, char c)
{
	unsigned int	count;
	unsigned int	i;
	size_t			len;

	count = 0;
	i = 0;
	len = ft_strlen(s);
	while (s[i] && s[i] == c)
		i++;
	if (i == len)
		return (0);
	if (s[0] != c && len != 0)
		count += 1;
	i = 0;
	while (i < len - 1)
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**array;
	unsigned int	count;
	unsigned int	i;
	unsigned int	len;

	if (s == NULL)
		return (NULL);
	count = ft_count_parts(s, c);
	array = NULL;
	array = (char **)malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (*s && i < count)
	{
		while (*s == c)
			s++;
		len = 0;
		while (*s++ != c)
			len++;
		array[i] = ft_strncpy(ft_strnew(len), s - (len + 1), len);
		i++;
	}
	array[i] = NULL;
	return (array);
}
