/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhordern <lhordern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:21:10 by lhordern          #+#    #+#             */
/*   Updated: 2013/12/15 19:48:19 by lhordern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

/*
** colors
*/
# define NORMAL "\x1B[0m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define WHITE "\x1B[37m"
# define BLUE "\x1B[0;34m"
# define BROWN "\x1B[0;33m"
# define CYAN "\x1B[0;36m"
# define GRAY "\x1B[1;30m"
# define PURPLE "\x1B[0;35m"
# define LIGHT_BLUE "\x1B[1;34m"
# define LIGHT_CYAN "\x1B[1;36m"
# define LIGHT_GRAY "\x1B[0;37m"
# define LIGHT_GREEN "\x1B[1;32m"
# define LIGHT_PURPLE "\x1B[1;35m"
# define LIGHT_RED "\x1B[1;31m"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_str
{
	char			*data;
	struct s_str	*next;
}					t_str;

int		ft_amoi(const char *str);
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_isupper(int c);
char	*ft_itoa(int n);
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list	*ft_lstnew(void const *content, size_t content_size);
t_str	*ft_lstnewstr(char *content);
t_str	*ft_lstaddclassify(t_str *lst, t_str *new);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
int		ft_power(int n, int pow);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendlcolor(char const *s1, char *color);
void	ft_putstrcolor(char const *s1, char *color);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
void	ft_strclr(char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char* s1, const char* s2);
void	ft_strdel(char **as);
char	*ft_strdup(const char *s1);
int		ft_strequ(char const *s1, char const *s2);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnfjoin(char *s1, char const *s2, size_t n);
char	*ft_strfjoin(char *s1, char const *s2);
char	*ft_strsubjoin(char const *s1, char const *s2, size_t st, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char* c);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnextchr(char *s, char c, char *chr);
char	*ft_strstr(const char *str, const char *find);
char	*ft_strnstr(const char *str, const char *find, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	**ft_strsplit(char const *s, char c);

#endif /* !LIBFT_H */
