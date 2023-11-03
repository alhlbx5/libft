/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:20:12 by aalhalab          #+#    #+#             */
/*   Updated: 2023/11/03 22:48:29 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *a, int c)
{
	while (*a)
	{
		if (*a == ((char)c))
			return ((char *)a);
		a++;
	}
	if (*a == ((char)c))
		return ((char *)a);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *a = "0123451679";
// 	int b = 'a';

// 	printf("result is    = << |%s|, %p >>\n",    strchr(a, b), strchr(a, b));
// 	printf("ft_result is = << |%s|, %p >>\n", ft_strchr(a, b), ft_strchr(a, b));
// }
