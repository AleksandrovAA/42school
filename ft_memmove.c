/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 22:24:26 by ngale             #+#    #+#             */
/*   Updated: 2019/09/17 22:27:23 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *st1, const void *st2, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;
    int l;
    
    l = (int)n;
	s1 = (unsigned char *)st1;
	s2 = (unsigned char *)st2;
    //if (!s1 && !s2)
        //return (0);
    if (st1 == st2 || !n)
        return (st1);
    else if (st1 < st2)
    {
        while (l--)
            *s1++ = *s2++;
        //*s1 = '\0';
    }
    else
    {
        l = -1;
        while (++l <= (int)n)
            s1[n - l] = s2[n - l];
    }
	return (st1);
}
