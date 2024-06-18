/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuznets <vkuznets@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:13:57 by vkuznets          #+#    #+#             */
/*   Updated: 2024/05/17 12:01:59 by vkuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	if (write (1, &c, 1) < 0)
		return (-1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	i;

	i = -1;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[++i])
		if ((write (1, &str[i], 1)) < 0)
			return (-1);
	return (i);
}

int	ft_length(long n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length++;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

int	ft_putnmbr(int n)
{
	int		length;
	long	num;

	num = n;
	length = ft_length(num);
	if (num < 0)
	{
		num = -num;
		if (ft_printstr("-") < 0)
			return (-1);
	}
	while (num > 9)
	{
		if (ft_putnmbr(num / 10) < 0)
			return (-1);
		num %= 10;
	}
	if (ft_putchar(num + '0') < 0)
		return (-1);
	return (length);
}
