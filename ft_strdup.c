/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:39:14 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/26 17:20:54 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *buffer;
	size_t n;

	n = ft_strlen(s1) + 1;
	buffer = malloc(n);
	if (buffer)
	{
		ft_memcpy(buffer, s1, n - 1);
    	buffer[n - 1] = '\0';
		return (buffer);
	}
	return (NULL);
}
