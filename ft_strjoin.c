/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:28:44 by aalhalab          #+#    #+#             */
/*   Updated: 2023/11/01 18:10:19 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  i1;
    size_t  i2;
    size_t  i;

    i1 = ft_strlen(s1);
    i2 = ft_strlen(s2);
    if (!s1 || !s2)
        return NULL;
    char *str2 = (char *)malloc(i1 + i2 + 1);
    if (!str2)
        return NULL;
    i = 0;
    while (s1[i])
    {
        str2[i] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i])
    {
        str2[i1 + i] = s2[i];
        i++;
    }
    str2[i1 + i2] = '\0';
    return str2;
}
