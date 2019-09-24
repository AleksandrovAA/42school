/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:54:04 by ngale             #+#    #+#             */
/*   Updated: 2019/09/23 22:33:42 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		count_len(int nb)
{
    int     len;

	len = 0;
	if (nb < 0)
	{
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

static int      otr(char *f, int n)
{
    *f = (8 + '0');
    return (n / 10);
}

char            *ft_itoa(int n)
{
	char	*f;
	int		len;

	len = count_len(n);
    if (!(f = (char *)malloc((len + 1) * sizeof(char))))
        return (0);
    f[len] = '\0';
    if (n == -2147483648)
        n = otr(&f[--len], n);
    if (n < 0)
    {
        f[0] = '-';
        n *= -1;
    }
    while (--len)
    {
        f[len] = ((n % 10) + '0');
        n /= 10;
    }
    if (f[0] != '-')
        f[len] = ((n % 10) + '0');
	return (f);
}

