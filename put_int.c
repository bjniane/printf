/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjniane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:54:35 by bjniane           #+#    #+#             */
/*   Updated: 2023/11/29 16:06:38 by bjniane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	return_len(long nb)
{
	int		i;
	long	n;

	i = 0;
	n = nb;
	if (n < 0)
		i++;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	put_int(int n)
{
	int		i;
	char	str[30];
	long	nb;

	i = 0;
	nb = (long)n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (nb >= 10)
	{
		str[i++] = '0' + nb % 10;
		nb /= 10;
	}
	str[i] = '0' + nb;
	while (i >= 0)
		write(1, &str[i--], 1);
	return (return_len(n));
}
// #include <stdio.h>
// int main()
// {
//     int num = -12345;
//     int printed_len = put_int(num);
//     write(1, "\n", 1);  // Add a newline for better readability
//     write(1, "Printed length: ", 16);
//     put_int(printed_len);
//     write(1, "\n", 1);

//     return 0;
// }