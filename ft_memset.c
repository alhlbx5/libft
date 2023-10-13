/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:53:54 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/10 22:07:08 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, size_t n)
{
	int i;
	unsigned char ch;
	
	i = 0;
	ch = (unsigned char)c;
	while (i < n )
	{
		((unsigned char*)str)[i] = ch;
		i++;
	}
	return (str); // why should it returns something but the bzero() doesnt??
}
