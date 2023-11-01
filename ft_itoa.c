/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:03:19 by aalhalab          #+#    #+#             */
/*   Updated: 2023/11/01 14:10:49 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
    char *str = malloc(11);

    if (n == -2147483648)
        return (ft_strdup("-2147483648"));
    if (n == 0) 
        return (ft_strdup("0"));
    int sign, num, length;
    if (n < 0) {
        sign = -1;
        num = -n;
        length = 1;
    } else {
        sign = 1;
        num = n;
        length = 0;
    }
    int temp = num;
    while (temp > 0) {
        length++;
        temp /= 10;
    }
    
    if (!str) {
        return 0;
    }
    if (sign == -1) {
        str[0] = '-';
    }
    int index = length - 1;
    while (num > 0) {
        str[index] = (num % 10) + '0';
        num /= 10;
        index--;
    }
    str[length] = '\0';
    return str;
}
int main()
{
    printf("%s\n", ft_itoa(0));
}
