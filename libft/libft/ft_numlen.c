/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 20:20:11 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 20:28:16 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_numlen(int nb)
{
	size_t	len;

	len = 0;
	if (nb < 0)
	{
		if (nb != -2147483648)
			nb *= -1;
		len++;
	}
	if (nb == 0)
		len++;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}