/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjniane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:41:49 by bjniane           #+#    #+#             */
/*   Updated: 2023/11/30 20:01:27 by bjniane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put(char c, va_list a)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += put_char(va_arg(a, int));
	else if (c == 's')
		i += put_str(va_arg(a, char *));
	else if (c == 'd' || c == 'i')
		i += put_int(va_arg(a, int));
	else if (c == 'u')
		i += put_uns_dec(va_arg(a, unsigned int));
	else if (c == 'x')
		i += put_low_hex(va_arg(a, unsigned int));
	else if (c == 'X')
		i += put_upp_hex(va_arg(a, unsigned int));
	else if (c == 'p')
		i += put_ptr(va_arg(a, unsigned long));
	else if (c == '%')
		i += put_char('%');
	else
		i += put_char(c);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(ptr, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count += ft_put(str[i + 1], ptr);
			i++;
		}
		else
			count += put_char(str[i]);
		i++;
	}
	va_end(ptr);
	return (count);
}
