/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:52:20 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/24 11:12:35 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>

// int		ft_atoi(const char *str);
// char	*ft_itoa(int n);
// char	*strcpy(char * dst, const char * src);
// int		ft_isalnum(char c);
// void	*ft_memmove(void *dst, const void *src, size_t len);
// char 	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlcat	(char * dst,const char * src, size_t n);
char	*ft_strnstr(const char *a,const char *b, size_t n);
char	*ft_strrchr(const char *a, int c);
int	ft_strlen(const char *c);
char	*ft_strchr(const char *a, int c);
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);

#endif
