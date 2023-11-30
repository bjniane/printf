/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_upp_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjniane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:30:26 by bjniane           #+#    #+#             */
/*   Updated: 2023/11/30 15:33:49 by bjniane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_upp_hex(unsigned long c)
{
	char	*hex;
	int		count;

	hex = "0123456789ABCDEF";
	count = 0;
	if (c >= 16)
		count += put_upp_hex(c / 16);
	put_char(hex[c % 16]);
	count++;
	return (count);
}
