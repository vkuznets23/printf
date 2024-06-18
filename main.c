/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 09:50:51 by vkuznets          #+#    #+#             */
/*   Updated: 2024/05/16 10:14:39 by vkuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int	main(int ac, char **av)
{
	ft_printf("result %j", atoi(av[1]));
	printf("result %j");
}

/*#include <limits.h>
int	main(void)
{
	int	n = 10;
	void	*ptr;
	ptr = &n;
	printf("%i", ft_printf("\001\002\007\v\010\f\r\n"));
	printf("\n");
	printf("original shit: %i\n", printf(" %p %p ", ULONG_MAX, -ULONG_MAX));
	printf("some shit: %i", ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX));
	printf("\n");
	ft_printf("Char: %c", 'a');
	printf("\n");
	ft_printf("String: %s", "HElLO");
	printf("\n");
	ft_printf("Pointer: %p", ptr);
	printf("\n");
	ft_printf("Integer d: %d", 8);
	printf("\n");
	ft_printf("Integer %i", 8);
	printf("\n");
	ft_printf("Unsigned integer %u", 8);
	printf("\n");
	printf("original shit: %i\n", printf(" %x ", LONG_MIN));
	printf("my shit: %i", ft_printf(" %x ", LONG_MIN));
	printf("\n");
	ft_printf("Hex X %X", 10);
	printf("\n");
	ft_printf("Percen sign %%", "%");
	printf("\n");
}*/
