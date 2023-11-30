/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_ptr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjniane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:19:08 by bjniane           #+#    #+#             */
/*   Updated: 2023/11/30 15:21:25 by bjniane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_ptr(unsigned long c)
{
	int	count;

	count = 0;
	put_str("0x");
	count = put_low_hex(c);
	return (count + 2);
}
