/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 13:46:21 by ngale             #+#    #+#             */
/*   Updated: 2019/10/02 13:56:32 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include "libft.h"

# ifndef BUFF_SIZE
# define BUFF_SIZE 1024

# endif

int	get_next_line(const int fd, char **line);

#endif
