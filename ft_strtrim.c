/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:31:01 by aalhalab          #+#    #+#             */
/*   Updated: 2023/11/03 22:47:50 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	f;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (set[i] == '\0' || s1[i] == '\0')
		return (ft_strdup(s1));
	f = ft_strlen(s1);
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strrchr(set, s1[f - j - 1]))
		j++;
	new_str = ft_substr(s1, i, f - i - j);
	return (new_str);
}
// int main()
// {
//     printf("%s\n", ft_strtrim("", ""));
// }
