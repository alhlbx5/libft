/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:31:01 by aalhalab          #+#    #+#             */
/*   Updated: 2023/11/01 18:52:12 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_in_set(char c, char const *set) 
{
    while (*set) 
    {
        if (*set == c)
            return 1;
        set++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    if (!s1) return NULL;
    size_t len = 0;
    while (s1[len])
        len++;
    size_t start = 0;
    while (s1[start] && is_in_set(s1[start], set))
        start++;
    size_t end = len - 1;
    while (end > start && is_in_set(s1[end], set))
        end--;
    size_t new_len = end - start + 1;
    char *trimmed_str = (char *)malloc(new_len + 1);
    if (!trimmed_str) 
        return NULL;
    size_t i = 0;
    while (i < new_len)
    {
        trimmed_str[i] = s1[start + i];
        i++;
    }
    trimmed_str[new_len] = '\0';
    return trimmed_str;
}
