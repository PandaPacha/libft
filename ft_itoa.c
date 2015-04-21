/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 18:26:59 by mafagot           #+#    #+#             */
/*   Updated: 2014/11/25 16:31:14 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_length(int n, size_t *len)
{
	*len = 1;
	if (n > 0)
	{
		*len = 0;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		*len += 1;
	}
}

char			*ft_itoa(int n)
{
	size_t		len;
	size_t		i;
	char		*str;

	ft_length(n, &len);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	if (n > 0)
		n *= -1;
	while (n != 0)
	{
		str[len - i++ - 1] = -(n % 10) + '0';
		n /= 10;
	}
	str[len] = '\0';
	return (str);
}
