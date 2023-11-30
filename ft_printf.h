/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjniane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:49:36 by bjniane           #+#    #+#             */
/*   Updated: 2023/11/30 15:55:10 by bjniane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	put_char(char c);
int	put_str(char *s);
int	put_int(int n);
int	put_ptr(unsigned long c);
int	put_low_hex(unsigned long c);
int	put_upp_hex(unsigned long c);
int	put_uns_dec(unsigned int n);
int	ft_printf(const char *str, ...);

#endif
