/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:11:51 by ahiguera          #+#    #+#             */
/*   Updated: 2023/12/11 15:36:10 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

/* ------------------------------------------------------------------------- */
//libft prototypes
/* ------------------------------------------------------------------------- */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

t_list	*ft_lstnew(void	*content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/* ------------------------------------------------------------------------- */
//ft_printf prototypes
/* ------------------------------------------------------------------------- */
# define DECIMAL		"0123456789"
# define HEXADECIMAL_UP "0123456789ABCDEF"
# define HEXADECIMAL_LO "0123456789abcdef"
# define OCTAL			"01234567"

# define PTR_PREFIX		"0x"
# define NULL_STR		"(null)"

int		ft_printf(char const *h, ...);

void	pf_betterwrite(void *buf, size_t len, int *result);
void	pf_putchar(char c, int *result);
void	pf_putstr(char *str, int *result);

void	pf_putbase(unsigned long n, char *base, int *result);
void	pf_putsigned(int n, int *result);
void	pf_putpointer(void *ptr, int *result);
void	pf_putuntilpercent(char *str, size_t *i, int *result);

/* ------------------------------------------------------------------------- */
//get_next_line prototypes
/* ------------------------------------------------------------------------- */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50
# endif

void	gn_strncpy(char *result, char *orin, size_t len);
void	gn_free(char *fres);
char	gn_strchr(char *str, char c);

char	*get_next_line(int fd);

#endif