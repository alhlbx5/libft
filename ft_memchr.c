/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:45:31 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/14 17:23:42 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memchr(const void *s, int c, int n)
{
	unsigned char *a = (char *)s;
	
	int i;
	i = 0;
	char *ptr = &ptr;
	
	while(a[i])
	{
		if (a[i] == c)
			return (a);
		else
			return ('/0');
			
	}
}
