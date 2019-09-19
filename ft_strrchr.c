/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:00:36 by ngale             #+#    #+#             */
/*   Updated: 2019/09/16 20:32:21 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s1, int c)
{
    unsigned char    *s;
	unsigned char    *m;
    char	         n;
    int              i;

    s = (unsigned char *)s1;
    i = 0;
    m = 0;
	n = (char)c;
    while (*s)
    {
        m = s++;
        i++;
    }
        //while (!ft_isprint)
    s = (unsigned char *)s1;
	while (i >= 0)
	{
		if (s[i] == n)
			return ((char *)s + i);
        //s--;
        i--;
	}
	return (0);
}
