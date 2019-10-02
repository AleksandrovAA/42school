/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 20:16:44 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 11:52:19 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
    if (!s1 && !s2)
        return (1);
	if (!s1 || !s2 || ft_strlen((char *)s1) != ft_strlen((char *)s2))
		return (0);
	if (ft_strncmp(s1, s2, n) == 0 && (int)n)
		return (1);
	return (0);
}
