/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:53:54 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/17 13:14:45 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int i;
	unsigned char ch = (unsigned char)c;
	char *s = (char *)str;
	
	i = 0;

	while (i < n)
	{
		s[i] = ch;
		i++;
	}
	return (str);
}
