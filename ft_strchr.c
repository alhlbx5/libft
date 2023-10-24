/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:20:12 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/23 19:28:18 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *a, int c)
{
	int i;
	i = 0;
	while (a[i])
	{
		if (a[i] ==((char) c))
			return (a + i);
		i++;
	}
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
