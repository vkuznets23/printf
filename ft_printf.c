/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuznets <vkuznets@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:28:34 by vkuznets          #+#    #+#             */
/*   Updated: 2024/05/16 09:57:30 by vkuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_formats(va_list args, const char format)
{
	long	len;
	void	*ptr;

	if (format == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (format == 's')
		len = ft_printstr(va_arg(args, char *));
	else if (format == 'p')
	{
		ptr = va_arg(args, void *);
		len = ft_print_pointer(ptr);
	}
	else if (format == 'd' || format == 'i')
		len = ft_putnmbr(va_arg(args, int));
	else if (format == 'u')
		len = print_unsigned_dec(va_arg(args, unsigned int));
	else if (format == 'x')
		len = ft_put_hex(va_arg(args, unsigned int), 'x');
	else if (format == 'X')
		len = ft_put_hex(va_arg(args, unsigned int), 'X');
	else if (format == '%')
		len = ft_putchar('%');
	else
		return (-1);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	long	len;
	int		temp;

	i = -1;
	len = 0;
	va_start(args, str);
	while (str[++i])
	{
		if (str[i] == '%')
			temp = ft_formats(args, str[i++ + 1]);
		else
			temp = ft_putchar(str[i]);
		if (temp < 0)
			return (-1);
		len += temp;
	}
	va_end(args);
	return (len);
}
