/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <chrrodri@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 18:18:03 by chrrodri          #+#    #+#             */
/*   Updated: 2024/07/07 20:26:47 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*seq1;
	const unsigned char	*seq2;

	seq1 = (const unsigned char *) s1;
	seq2 = (const unsigned char *) s2;
	while (n--)
	{
		if (*seq1 != *seq2)
			return (*seq1 - *seq2);
		seq1++;
		seq2++;
	}
	return (0);
}
