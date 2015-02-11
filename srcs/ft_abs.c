/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:18:36 by mafagot           #+#    #+#             */
/*   Updated: 2015/01/06 16:18:43 by mafagot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_abs(int nb)
{
	unsigned int	ret;

	if (nb == INT_MIN)
		ret = (unsigned int)((nb + 1) * -1 + 1);
	else if (nb < 0 && nb != INT_MIN)
		ret = (unsigned int)(nb * -1);
	else
		ret = (unsigned int)nb;
	return (ret);
}
