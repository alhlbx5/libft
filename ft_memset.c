/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:53:54 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/25 15:47:36 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	char			*s;
	unsigned char	ch;

	ch = c;
	s = (char *)str;
	i = 0;
	while (i < n)
	{
		s[i] = ch;
		i++;
	}
	return (str);
}
