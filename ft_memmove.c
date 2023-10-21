/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:46:57 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/20 12:18:28 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s;
	char		*d;
	char		buffer[50];
	size_t		i;

	i = 0;
	s = (const char *) src;
	d = (char *) dst;
	// *buffer = "";
	while (len < i)
	{
		buffer[i] = s[i];
		i++;
	}
	i = 0;
	while (len < i)
	{
		d[i] = buffer[i];
		i++;
	}
	return (d);
}
