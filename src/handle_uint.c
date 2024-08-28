/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_uint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <chrrodri@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:55:41 by chrrodri          #+#    #+#             */
/*   Updated: 2024/08/14 20:57:11 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_uint(va_list args)
{
	unsigned int	num;

	num = va_arg(args, unsigned int);
	ft_putunbr(num);
	return (get_uint_length(num));
}
