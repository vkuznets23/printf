/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuznets <vkuznets@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:09:02 by vkuznets          #+#    #+#             */
/*   Updated: 2024/05/17 11:57:13 by vkuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_printstr(char *str);
int		ft_length(long n);
int		ft_putnmbr(int n);
int		ft_put_hex(unsigned long n, char format);
int		print_unsigned_dec(unsigned int num);
int		ft_print_pointer(void *ptr);
int		ft_printf(const char *str, ...);

#endif
