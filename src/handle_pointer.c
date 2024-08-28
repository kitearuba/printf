/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <chrrodri@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:52:50 by chrrodri          #+#    #+#             */
/*   Updated: 2024/08/14 20:53:38 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_pointer(va_list args)
{
	unsigned long	ptr_value;
	int				len;

	ptr_value = (unsigned long)va_arg(args, void *);
	if (ptr_value == 0)
	{
		ft_putstr_fd("(nil)", FT_STDOUT);
		return (5);
	}
	ft_putstr_fd("0x", FT_STDOUT);
	ft_puthex(ptr_value, 0);
	len = 2 + get_hex_length(ptr_value);
	return (len);
}
