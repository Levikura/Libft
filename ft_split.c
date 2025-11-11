/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufrank <lufrank@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:25:15 by lufrank           #+#    #+#             */
/*   Updated: 2025/11/11 17:26:05 by lufrank          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char sep)
{
	int	count_seperator;
	int	index;

	count_seperator = 0;
	index = 0;
	while (str[index])
	{
		while (str[index] && str[index] == sep)
			index++;
		if (str[index])
		{
			count_seperator++;
			while (str[index] && str[index] != sep)
				index++;
		}
	}
	return (count_seperator);
}

static char	**ft_free(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
	return (NULL);
}

static char	**ft_fill_words(char **split, char const *s, char c)
{
	int	start;
	int	end;
	int	j;

	start = 0;
	end = 0;
	j = 0;
	while (s[end])
	{
		while (s[end] && s[end] == c)
			end++;
		start = end;
		while (s[end] && s[end] != c)
			end++;
		if (end > start)
		{
			split[j] = ft_substr(s, start, end - start);
			if (!split[j])
				return (ft_free(split));
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split)
		return (NULL);
	return (ft_fill_words(split, s, c));
}
