/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:12:44 by ngale             #+#    #+#             */
/*   Updated: 2019/09/22 20:45:06 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H
# include <string.h>

void	*ft_memset(void *str, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *st1, const void *st2, size_t n);
void    *ft_memccpy(void *st1, const void *st2, int c,  size_t n);
void	*ft_memmove(void *st1, const void *st2, size_t n);
void	*ft_memchr(const void *str, int c, size_t len);
int     ft_memcmp(const void *st1, const void *st2, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *src);
char    *ft_strcpy(char *st1, const char *st2);
char    *ft_strncpy(char *st1, const char *st2, size_t n);
char    *ft_strcat(char *st1, const char *s2);
char    *ft_strncat(char *st1, const char *append, size_t n);
size_t  ft_strlcat(char *st1, const char *append, size_t n);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *h, const char *s);
char	*ft_strnstr(const char *huge, const char *s2, size_t n);
int		ft_strcmp(const char *st1, const char *st2);
int     ft_strncmp(const char *st1, const char *st2, size_t n);
int     ft_atoi(const char *str);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void    ft_strdel(char **as);
void    ft_strclr(char *s);
void    ft_striter(char *s, void (*f)(char *));
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
char    *ft_strmap(char const *s, char (*f)(char));
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int     ft_strequ(char const *s1, char const *s2);
int     ft_strnequ(char const *s1, char const *s2, size_t n);
char    *ft_strsub(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s);

void    ft_putchar(char c);
void    ft_putstr(char const *s);

void    ft_putnbr(int n);
void    ft_putchar_fd(char c, int fd);

void    ft_putnbr_fd(int n, int fd);
#endif
