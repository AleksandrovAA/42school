/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:31:40 by ngale             #+#    #+#             */
/*   Updated: 2019/09/20 22:02:40 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *st1, const void *st2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				l;

	l = (int)n;
	s1 = (unsigned char *)st1;
	s2 = (unsigned char *)st2;
	if (s2 == s1)
		return (st1);
	while (l)
	{
		*s1++ = *s2++;
		l--;
	}
	return (st1);
}
