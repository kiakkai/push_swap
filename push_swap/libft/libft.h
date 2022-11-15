/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <kaizhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:15:01 by kaizhang          #+#    #+#             */
/*   Updated: 2022/11/12 18:17:02 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdio.h>
# include <strings.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE

# define BUFFER_SIZE BUFSIZ

# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

int				ft_atoi(const char *str);
void			ft_bzero(void *str, size_t n);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(int i);
int				ft_isalpha(int i);
int				ft_isascii(int i);
int				ft_isdigit(int i);
int				ft_isprint(int i);
char			*ft_itoa(int n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t n);
void			*ft_memset(void *str, int c, size_t len);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s1);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strjoin(char *s1, char *s2);
int				ft_strlcat(char *dst, const char *src, int dstsize);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
int				ft_strlen(const char *str);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
char			*ft_strnstr(const char *haystack, const char *needle, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, int start, int len);
int				ft_tolower(int i);
int				ft_toupper(int i);
t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
int				ft_lstsize(t_list *lst);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
char			*get_next_line(int fd);
int				ft_get_eol(const char *str);
char			*ft_get_line(char **str, int nl_pos);
char			*ft_next_line(char **str);
int				ft_char_print(char c);
int				ft_hex_print(unsigned long n, char c);
int				ft_nbr_count(size_t n, int base);
unsigned int	ft_nbr_print(long n);
int				ft_printf(const char *str, ...);
int				ft_specifier_check(const char c, va_list arg, int *i);
int				ft_str_print(char *str);

#endif
