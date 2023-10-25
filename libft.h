/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:52:20 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/25 16:42:18 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>

int		ft_atoi(const char *str);
void	ft_bzero(char *c, int n);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(char c);
int		ft_isdigit(unsigned char c);
int		ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *str, int c, size_t n);
int		ft_sprint(char c);
char	*ft_strchr(const char *a, int c);
int		ft_strlen(const char *c);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strnstr(const char *a, const char *b, size_t n);
char	*ft_strrchr(const char *a, int c);
int		ft_tolower(int c);
int		ft_toupper(char c);
int		strncmp(const char *s1, const char *s2, size_t n);
#endif
