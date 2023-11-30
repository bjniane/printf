/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_low_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjniane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:22:36 by bjniane           #+#    #+#             */
/*   Updated: 2023/11/30 15:27:59 by bjniane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_low_hex(unsigned long c)
{
	char	*hex;
	int		count;

	hex = "0123456789abcdef";
	count = 0;
	if (c >= 16)
		count += put_low_hex(c / 16);
	put_char(hex[c % 16]);
	count++;
	return (count);
}
