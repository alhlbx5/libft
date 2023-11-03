/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:31:47 by aalhalab          #+#    #+#             */
/*   Updated: 2023/11/03 22:47:57 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// int ft_strncmp(const char *s1, const char *s2, size_t n)
// {
//     int i;

//     i = 0;
//     if (n == 0)
//         return (0);

//     while (s1[i] && s1[i] == s2[i] && n > 1)
//     {
//         i++;
//         n--;
//     }
//     return ((unsigned char *)s1[i] - (unsigned char *)s2[i]);
// }