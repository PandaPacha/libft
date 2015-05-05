/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/05 15:38:29 by mafagot           #+#    #+#             */
/*   Updated: 2015/05/05 15:41:14 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v'
			|| c == '\r' || c == '\f')
		return (1);
	else
		return (0);
}
