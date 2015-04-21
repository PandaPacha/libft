/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:42:26 by mafagot           #+#    #+#             */
/*   Updated: 2014/11/08 15:04:28 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v'
			|| c == '\r' || c == '\f')
		return (1);
	else
		return (0);
}

int				ft_atoi(const char *str)
{
	int					res;
	int					sign;
	unsigned int		i;

	i = 0;
	res = 0;
	sign = 1;
	if (str == NULL)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if ((ft_strcmp(str + i, "2147483648") == 0) && (sign == -1))
		return (INT_MIN);
	while (str[i] && ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
