/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:19:15 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/21 20:21:48 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}
size_t	ft_strlcat	(char * dst,const char * src, size_t n)
{
	size_t i;
	size_t c;
	size_t dstln;
	size_t srcln;

	i = 0;
	c = 0;
	dstln = ft_strlen(dst);
	srcln = ft_strlen((char *)src);
	while (dst[i])
	{
		i++;
	}
	while(c < srcln && i + 1 < n)
	{
		dst[i] = src[c];
		c++;
		i++;
	}
	dst[i] = 0;
	if (n <= dstln)
		return (n + srcln);
	else
		return (dstln + srcln);
}

// int main()
// {
// 	// char d1[20] = "12345";
// 	// char *s1 = "6789";
	
// 	char d3[20] = "pqrstuvwxyz";

// 	char d2[20] = "pqrstuvwxyz";
// 	char *s2 = "abcd";
// 	int i = 12;
// 	// int i = 0;
// 	//ft_strlcat(d1, s1, i);
// 	//strlcat(d2, s2, i);
// 	//printf("result is :  << %lu >> \n", strlcat(d, s, 3));
// 	printf("Original: %lu\n", strlcat(d2, s2, i));
// 	printf("Fake:     %lu\n", ft_strlcat(d3, s2, i));
// 	printf("%s\n", d2);
// 	printf("%s\n", d3);
// }
