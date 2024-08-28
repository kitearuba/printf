/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <chrrodri@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 21:28:35 by chrrodri          #+#    #+#             */
/*   Updated: 2024/08/15 17:37:46 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_int_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

int	get_uint_length(unsigned int n)
{
	int	length;

	length = 0;
	if (n == 0)
		length = 1;
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

int	get_hex_length(unsigned long n)
{
	int	length;

	length = 0;
	if (n == 0)
		length = 1;
	while (n)
	{
		n /= 16;
		length++;
	}
	return (length);
}
