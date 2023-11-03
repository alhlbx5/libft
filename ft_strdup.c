/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:39:14 by aalhalab          #+#    #+#             */
/*   Updated: 2023/11/03 22:48:27 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buffer;
	size_t	n;

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
