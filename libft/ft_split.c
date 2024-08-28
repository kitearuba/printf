/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <chrrodri@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:42:18 by chrrodri          #+#    #+#             */
/*   Updated: 2024/07/23 15:52:28 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_str(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	**ft_free_result(char **result, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

static char	*ft_get_next_word(const char **s, char c)
{
	const char	*start;
	char		*word;

	while (**s == c)
		(*s)++;
	start = *s;
	while (**s && **s != c)
		(*s)++;
	word = ft_substr(start, 0, *s - start);
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char		**result;
	size_t		substr_count;
	size_t		word_index;

	if (!s)
		return (NULL);
	substr_count = ft_count_str(s, c);
	result = (char **)malloc((substr_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	word_index = 0;
	while (word_index < substr_count)
	{
		result[word_index] = ft_get_next_word(&s, c);
		if (!result[word_index])
			return (ft_free_result(result, word_index));
		word_index++;
	}
	result[word_index] = NULL;
	return (result);
}
