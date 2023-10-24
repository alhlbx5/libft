/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:38:03 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/23 17:51:35 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *a, const char *b, size_t n)
{
	size_t	i;
	size_t	lenb;
	size_t	j;
	size_t	lena;

	i = 0;
	lenb = ft_strlen(b);
	lena = ft_strlen(a);
	if (lenb == 0)
		return ((char *)a);
	if (lenb > lena)
		return (0);
	while (a[i])
	{
		j = 0;
		while (a[i] == b[j] && i < n)
		{
			if (j == (lenb - 1))
				return ((char *)a + (i - j));
			i++;
			j++;
		}
		i = i - j + 1;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *a = "aaabcabcd";
// 	char *b = "abcd";
// 	int i = 9;

// 	printf("result is    = << %s >>\n",    strnstr(a, b, i));
// 	printf("ft_result is = << %s >>\n", ft_strnstr(a, b, i));
// }
