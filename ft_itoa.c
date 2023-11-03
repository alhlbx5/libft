/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:03:19 by aalhalab          #+#    #+#             */
/*   Updated: 2023/11/03 22:48:57 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

void	convert_to_string(char *str, int n)
{
	int	ints[3];

	if (n == 0)
	{
		str[0] = '0';
		return ;
	}
	ints[1] = 1;
	if (n < 0)
	{
		ints[1] = -1;
		n = -n;
	}
	ints[0] = numlen(n);
	str[ints[0]] = '\0';
	ints[2] = ints[0];
	if (ints[1] == 1)
		ints[2] = ints[2] - 1;
	while (ints[2] >= 0)
	{
		str[ints[2]--] = (n % 10) + '0';
		n /= 10;
	}
	if (ints[1] == -1)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	int		length;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = numlen(n);
	str = ft_calloc(length + 1, sizeof(char));
	if (!str)
		return (NULL);
	convert_to_string(str, n);
	return (str);
}

// int main()
// {
//     printf("%s\n", ft_itoa(0));
// }
