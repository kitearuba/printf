/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <chrrodri@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:42:11 by chrrodri          #+#    #+#             */
/*   Updated: 2024/08/14 20:46:55 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(const char *ptr, va_list args)
{
	if (*ptr == 'c')
		return (handle_char(args));
	else if (*ptr == 's')
		return (handle_string(args));
	else if (*ptr == 'p')
		return (handle_pointer(args));
	else if (*ptr == 'd' || *ptr == 'i')
		return (handle_int(args));
	else if (*ptr == 'u')
		return (handle_uint(args));
	else if (*ptr == 'x' || *ptr == 'X')
		return (handle_hex(args, *ptr == 'X'));
	else if (*ptr == '%')
		return (handle_percent());
	return (0);
}
