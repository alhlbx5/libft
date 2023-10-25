/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:19:34 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/25 16:04:36 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)

{
	size_t	i;

	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		if (dstsize == 0)
			break ;
		dst[i] = src[i];
		i++;
	}
	return (ft_strlen((char *)src));
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char s[20] = "aaa";
// 	char d[20];
// 	int n = 0;
// 	char b[20];

// 	printf("result is<
// 	printf("result is 
// }
