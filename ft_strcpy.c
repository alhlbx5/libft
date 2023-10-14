/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:15:08 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/14 15:50:35 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int i;
    i = 0;
    while(src[i] && dstsize <= i)
    {
        dst[i] = src[i];
        i++;
    }
    return (ft_strlen(src));
    
}

int main() 
{
    char a[5]; // Destination buffer
    char b[] = "Hello, world!";
    strlcpy(a, b , 1);
    printf("origin  %s\n", a);
    char c[5]; // Destination buffer
    char d[] = "Hello, world!";
    ft_strlcpy(c, d, 1);

    printf("copy  %s\n", c);

    return 0;
}
