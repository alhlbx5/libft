/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:44:07 by aalhalab          #+#    #+#             */
/*   Updated: 2023/11/03 22:56:36 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	co;
	int	i;

	co = 0;
	i = 0;
	while (*s)
	{
		if (*s == c)
			i = 0;
		else if (i == 0)
		{
			co++;
			i = 1;
		}
		s++;
	}
	return (co);
}

char	*copy(const char *s, size_t n)
{
	size_t	i;
	char	*buffer;

	if (!s)
		return (NULL);
	buffer = malloc(n + 1);
	if (!buffer)
		return (NULL);
	if (buffer)
	{
		i = 0;
		while (i < n)
		{
			buffer[i] = s[i];
			i++;
		}
		buffer[n] = '\0';
	}
	return (buffer);
}

char	**free_split(char **s, int i)
{
	while (i >= 0)
		free(s[i--]);
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		ints[2];
	char	**result;

	result = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!result)
		return (NULL);
	ints[1] = 0;
	while (*s)
	{
		if (*s != c)
		{
			ints[0] = 0;
			while (*s && *s != c && *s++)
				ints[0]++;
			result[ints[1]] = copy(s - ints[0], ints[0]);
			if (!result[ints[1]])
				return (free_split(result, ints[1]));
			ints[1]++;
		}
		else
			s++;
	}
	result[ints[1]] = NULL;
	return (result);
}
