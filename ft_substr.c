/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:18:50 by aalhalab          #+#    #+#             */
/*   Updated: 2023/11/01 15:23:04 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	if (!s) 
		return NULL;
    i = 0;
    while (s[start + i] && i < len)
		i++;
    char *substring = malloc(i + 1);
    if (!substring)
		return NULL;
    i = 0;
    while (s[start + i] && i < len)
	{
		substring[i] = s[start + i];
		i++;
    }
	substring[i] = '\0';
    while (s[i]) 
		i++;
    if (start >= i) 
		substring[0] = '\0';
	return substring;
}
// int main()
// {
// 	printf("%s\n",ft_substr("01234", 10, 10));
// }
