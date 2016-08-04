/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 11:06:17 by jbuys             #+#    #+#             */
/*   Updated: 2016/07/17 17:02:23 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

char	*ft_strdup(const char *str1);
int		ft_strlen(const char *str);
int		ft_atoi(const char *str);
void	ft_bzero(void *str, int n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strstr(char *str, char *find_str);
char	*ft_strnstr(char *str, char *find_str, size_t len);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strncat(char *dst, const char *src, size_t n);

char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	**ft_strsplit(char const *s, char c);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strnew(size_t size);
void	ft_striter(char *s, void (*f) (char *));
void	ft_striteri(char *s, void (*f) (unsigned int, char *));
char	*ft_strmap(const char *s, char (*f) (char));
char	*ft_strmapi(const char *s, char (*f) (unsigned int, char *));
int		ft_strequ(const char *s1, const char *s2);
int		ft_strnequ(const char *s1, const char *s2, size_t n);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s);
void	ft_strclr(char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_itoa(int n);

int		ft_putchar(int c);
void	ft_putstr(char const *str);
void	*ft_memalloc(size_t size);
void	*ft_memset(void *str, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
int		ft_memcmp(const void *dst, const void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
void	ft_memdel(void **ap);

void	*ft_strdel(char **as);
void	ft_putendl(const char *s);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isupper(int c);
int		ft_islower(int c);
char	*ft_strcpy(char *dst, const char *src);

#endif
