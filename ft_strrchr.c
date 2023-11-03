/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:25:21 by aalhalab          #+#    #+#             */
/*   Updated: 2023/11/03 22:47:52 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *a, int c)
{
	int	i;

	i = ft_strlen(a);
	while (i >= 0)
	{
		if (a[i] == ((char)c))
			return ((char *)a + i);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *a = "tripoutille";
// 	int b = 't' + 256;

// 	printf("result is    = << |%s|, %p >>\n",    strrchr(a, b), strrchr(a, b));
// 	printf("ft_re
// }
