/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 12:39:10 by ngale             #+#    #+#             */
/*   Updated: 2019/09/16 20:22:48 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <strings.h>

int		main(void)
{
	char str0[25] = "Princess of code\0";
	char copy1[20] = "Blablablablablab";
	char copy2[20] = "Blablablablablab";
	char copy3[] = "";
	char copy4[10] = "12345";
	char copy5[10] = "12345";
	printf("My strlen = %zu\n", ft_strlen(str0));
	printf("My strcmp = %d || ", ft_strcmp(copy1, copy2));
	printf("My strcmp2 = %d\n", ft_strcmp(copy3, copy4));
	char *dest = ft_strdup(str0);
	ft_putstr(dest);
	char *mem = memset (copy1,'-',6);
	char *mem2 = ft_memset (copy2,'-',6);
	strlen(copy3);
	//ft_putstr(mem);
	printf("\nMemset = %s\n", mem);
	printf("My memset = %s\n", mem2);
	char *chr = memchr(copy1, 'f', 12);
	char *chr2 = ft_memchr(copy2, 'f', 12);
	printf("Memchr = %s\n", chr);
	printf("My memchr = %s\n", chr2);
	//printf("Strncat = %s\n", strncat(copy4, mem, 2));
	printf("Strlcat = %lu :o ", strlcat(copy4, mem, 8));
	printf (" %s\n", copy4);
	printf("My strlcat = %lu <3 ", ft_strlcat(copy5, mem, 8));
	printf (" %s", copy5);
	//int i = -1;
    char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	size_t max2 = ft_strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	size_t max3 = strlen("there is no stars in the sky");
	printf("\n%lu || %lu // %lu\n", max, max2, max3);
	max = ft_strlcat(buff2, str, max2);
	printf("My strlcat2.0 = %lu\n", max);
	char *src = "--> nyancat <--\n\r";
	char dst1[30];
	char dst2[30];
	//printf("Was: %s\n\t%s\n", copy3, copy1);
	__builtin___memset_chk (dst1, 'B', sizeof(dst1), __builtin_object_size (dst1, 0));
	__builtin___memset_chk (dst2, 'B', sizeof(dst2), __builtin_object_size (dst2, 0));
	printf("Strcpy = %s\n", strncpy(dst1, src, 12));
	printf("My strcpy = %s\n", ft_strncpy(dst2, src, 12));
	//src = "the cake is a lie !\0I'm hidden lol\r\n";
	char *d1 = strrchr(str, ' ');
	char *d2 = ft_strrchr(str, ' ');
	//printf("Strrchr = %s \nMy version = %s\n", d1, d2);
	printf("Strrchr = %s \n", d1);
	printf("My version = %s\n", d2);
    char *src = "thanks to @apellicc for this test !\r\n";
    char dst1[0x22], dst2[0x22];
    int size = strlen(src);
    char *m = memmove(dst1, src, size);
    char *m2 = ft_memmove(dst2, src, size);
    printf("Memmove = %s\nMy function = %s", m, m2);
    
	return (0);
}
