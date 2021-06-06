/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:27:25 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/06/06 09:56:09 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include "ft_ctype.h"

void	ft_memdel(void **ptr);
void	ft_bzero(void *ptr, size_t num);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t num);
void	*ft_memccpy(void *dest, const void *src, int chr, size_t num);
void	*ft_memset(void *ptr, int c, size_t num);
void	*ft_calloc(size_t num, size_t size);

void	ft_strdel(char **str);
void	ft_strrev(char *str);
void	ft_strclr(char *str);
char	*ft_strdup(const char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strcat(char *dest, const char *src);

char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
void	*ft_memchr(const void *ptr, int c, size_t num);
char	*ft_strnstr(const char *str, const char *substr, size_t len);
char	*ft_strstr(const char *str, const char *substr);

char	*ft_strndup(const char *str, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_joindel(char *s1, char *s2);
char	*ft_joindeld(char *s1, char const *s2);
char	**ft_split(char const *s, char c);

int		ft_strcmp(const char *str1, const char *str2);
int		ft_strncmp(const char *str1, const char *str2, size_t num);

char	*ft_strncat(char *dest, const char *src, size_t num);
char	*ft_strncpy(char *dest, const char *src, size_t num);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t len);

void	ft_swapchr(char *a, char *b);

size_t	ft_strltok(const char *str, int c);
size_t	ft_strlen(const char *str);
size_t	ft_strclen(const char *str, int c);
size_t	ft_strslen(const char *str, const char *substr);
size_t	ft_strnlen(const char *str, size_t maxlen);

size_t	ft_nchar(char *str, int c);
size_t	ft_ndigit(char *str);

#endif