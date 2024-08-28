/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <chrrodri@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:54:08 by chrrodri          #+#    #+#             */
/*   Updated: 2024/08/14 20:54:54 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_string(va_list args)
{
	char	*str;
	int		len;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		ft_putstr_fd("(null)", FT_STDOUT);
		return (6);
	}
	ft_putstr_fd(str, FT_STDOUT);
	len = ft_strlen(str);
	return (len);
}
