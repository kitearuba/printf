/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <chrrodri@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 21:09:00 by chrrodri          #+#    #+#             */
/*   Updated: 2024/08/25 19:50:00 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft.h"

# define FT_STDOUT 1

int		ft_printf(const char *format, ...);
void	ft_putunbr(unsigned int n);
void	ft_puthex(unsigned long n, int uppercase);
int		handle_format(const char *format, va_list args);
int		print_format(const char *ptr, va_list args);
int		handle_char(va_list args);
int		handle_string(va_list args);
int		handle_pointer(va_list args);
int		handle_int(va_list args);
int		handle_uint(va_list args);
int		handle_hex(va_list args, int uppercase);
int		handle_percent(void);

//utilities
int		get_int_length(int n);
int		get_uint_length(unsigned int n);
int		get_hex_length(unsigned long n);

#endif // FT_PRINTF_H
