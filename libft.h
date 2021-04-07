/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 21:09:13 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/31 16:16:20 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_bzero(void *ptr, size_t num);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void	*ft_memchr(const void *ptr, int c, size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t num);
void	*ft_memccpy(void *dest, const void *src, int chr, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *ptr, int c, size_t num);

char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strstr(const char *str, const char *substr);
char	*ft_strnstr(const char *str, const char *substr, size_t len);

int		ft_strcmp(const char *str1, const char *str2);
int		ft_strncmp(const char *str1, const char *str2, size_t num);

char	*ft_strcat(char *dest, const char *src);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncat(char *dest,const char *src, size_t num);
char	*ft_strncpy(char *dest, const char *src, size_t num);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_strlcpy(char *dest, const char *src, size_t num);

size_t	ft_strlen(const char *str);
size_t	ft_strnlen(const char *str, size_t maxlen);
size_t	ft_strclen(const char *str, int c);
size_t	ft_strslen(const char *str, const char *substr);


size_t	ft_xnbrlen(unsigned n);
size_t	ft_digitlen(char *str);
size_t	ft_chrlen(char *str, int c);
size_t	ft_dseqlen(char *str);
size_t	ft_nbrlen(int n);

void	ft_strclr(char *str);
int		ft_strldiff(const char *str1, const char *str2);

int		ft_atoi(const char *nptr);
char	*ft_itoa(int n);
char	*ft_xtoa(unsigned n);
char	*ft_iwtoa(int n, size_t w);
char	*ft_ftoa(long double n, size_t len);


int		ft_isalpha(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isspace(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_isxdigit(int c);
int		ft_toupper(int c);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putcstr(char *str, int c);
void	ft_putsstr(char *str, char *substr);
void	ft_putnbr(int nb);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);

void	ft_strdel(char **str);
void	ft_memdel(void **ptr);
void	*ft_calloc(size_t num, size_t size);
char	*ft_strdup(const char *str);
char	*ft_strndup(const char *str, size_t num);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_joindeld(char *s1, char const *s2);
char	*ft_joindel(char *s1, char *s2);

size_t	ft_strltok(const char *str, int c);
char	*ft_revitoa(char *str, long int num);
void	ft_swapchr(char *a, char *b);
void	ft_strrev(char *str);

char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *));
#endif
