/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuznets <vkuznets@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:35:06 by vkuznets          #+#    #+#             */
/*   Updated: 2024/05/17 11:57:21 by vkuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned long nbr, char format)
{
	char			*base;
	int				result;
	int				temp;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	result = 0;
	if (nbr >= 16)
	{
		temp = ft_put_hex(nbr / 16, format);
		if (temp < 0)
			return (-1);
		result += temp;
	}
	result++;
	if (ft_putchar(base[nbr % 16]) < 0)
		return (-1);
	return (result);
}
