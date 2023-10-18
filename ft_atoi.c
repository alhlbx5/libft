/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:39:04 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/18 18:01:47 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

int	ft_atoi(const char *str)
{
	int	g[2];

	g[0] = 0;
	g[1] = 0;
	while ((*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	(*str == '+' || *str == '-') && (g[1] = *(str++)); 
	while (*str >= '0' && *str <= '9')
		g[0] = (g[0] * 10) + (*(str++) - 48);
	return (g[0] * (((2 * (g[1] == '-')) - 1) * -1));
}


// int ft_atoi(const char *str)
// {
// 	int i;
// 	int result;
// 	char sign;
	
// 	result = 0;
// 	i = 0;
// 	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
// 		i++;
// 	if(str[i] == '+' || str[i] == '-')
// 		sign = str[i++];
// 	while( str[i] >= '0' && str[i] <= '9')
// 		result = (result * 10) + (str[i++] - 48);
// 	if (sign == '-')
// 		return (-result);
// 	return (result);
// }



// int ft_atoi(const char *str)
// {
// 	int i;
// 	int result;
// 	char sign;
	
// 	sign = '+';
// 	result = 0;
// 	i = 0;
// 	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
// 			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
// 		i++;
// 	if(str[i] == '+' || str[i] == '-')
// 		sign = str[i++];
// 	while( str[i] >= '0' && str[i] <= '9')
// 	{
// 		result *= 10;
// 		result += str[i] - 48;
// 		i++;
// 	}
// 	if (sign == '-')
// 		return (-result);
// 	else
// 		return (result);
// }


// #include <stdio.h>
// #include <stdlib.h> 

// // int main ()
// {
// 	int result1;
// 	int result2;
// 	char *khara;
	
// 	khara = "2147483647";
// 	result1 = ft_atoi(khara);
// 	result2= atoi(khara);
// 	printf("ft_atoi = %d \n", result1);
// 	printf("atoi = %d \n", result2);
	
// 	return (0);
// }
