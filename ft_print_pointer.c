/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuznets <vkuznets@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:10:37 by vkuznets          #+#    #+#             */
/*   Updated: 2024/05/16 09:03:21 by vkuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	unsigned long	adress;
	int				result;
	int				temp;

	result = 0;
	adress = (unsigned long)ptr;
	temp = ft_printstr("0x");
	if (temp < 0)
		return (-1);
	result += temp;
	temp = ft_put_hex(adress, 'x');
	if (temp < 0)
		return (-1);
	result += temp;
	return (result);
}
