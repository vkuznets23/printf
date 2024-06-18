/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_dec.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuznets <vkuznets@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 08:41:21 by vkuznets          #+#    #+#             */
/*   Updated: 2024/05/17 11:57:35 by vkuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned_dec(unsigned int num)
{
	int	len;

	len = ft_length(num);
	if (num > 9)
		if (print_unsigned_dec(num / 10) < 0)
			return (-1);
	if (ft_putchar((num % 10) + '0') < 0)
		return (-1);
	return (len);
}
