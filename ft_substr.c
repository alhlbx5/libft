/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:18:50 by aalhalab          #+#    #+#             */
/*   Updated: 2023/11/03 22:41:12 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	i = ft_strlen(s);
	if (!i || i < start)
		return (ft_calloc(1, 1));
	i = ft_strlen(&s[start]);
	if (len < i)
		substring = ft_calloc(len + 1, sizeof(char));
	else
		substring = ft_calloc(i + 1, sizeof(char));
	if (!substring)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	return (substring);
}
// ft_strlcpy(substring, &s[start], len + 1);
// int main()
// {
// 	printf("%s\n",ft_substr("01234", 10, 10));
// }
