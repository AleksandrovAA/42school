/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 21:29:52 by ngale             #+#    #+#             */
/*   Updated: 2019/09/13 13:15:14 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char *ptr;
	int           n;
	unsigned char sign;

	ptr = (unsigned char *)str;
	n = (int)len;
	sign = (unsigned char)c;
	while (*ptr && n-- && *ptr != sign)
		ptr++;
	if (*ptr == sign)
		return (ptr);
	else
		return (0);
}
