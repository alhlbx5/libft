/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:04:08 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/16 19:11:52 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char* a = (unsigned char*)s1;
	unsigned char* b = (unsigned char*)s2;
	

	
	int i;
	i = 0;
	while ( i < n )
	{
		  if (a[i] != b[i])
		  {
            if (a[i] - b[i] > 0)
				return 1;
			else 
				return -1;
		  }
		i++;
	}
	
	return (0);
}


