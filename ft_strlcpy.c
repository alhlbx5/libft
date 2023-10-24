/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:19:34 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/24 11:20:59 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
// {
	
// }

#include <stdio.h>
#include <string.h>
int main()
{
	char *s = "0123456789";
	char *d = "0123456789";

	printf("result is << %lu >> \n the new desString is %s \n", strlcpy(d, s, 1), d);
	//printf("ft_result is << %d >> \n", ft_strlcpy(d, s, 5));
}
