/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:05:55 by mariaalm          #+#    #+#             */
/*   Updated: 2025/11/12 14:05:55 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_argstype(va_list args, char type)
{
	if (type == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (type == 'p')
		return (ft_printfptr(va_arg(args, void *)));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (type == 'u')
		return (ft_printfdecimal(va_arg(args, unsigned int)));
	else if (type == 'x')
		return (ft_printfhex(va_arg(args, unsigned int), 0));
	else if (type == 'X')
		return (ft_printfhex(va_arg(args, unsigned int), 1));
	else if (type == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *strs, ...)
{
	int		i;
	int		len;
	va_list	args;

	va_start(args, strs);
	i = 0;
	len = 0;
	while (strs[i])
	{
		if (strs[i] == '%')
		{
			i++;
			len += ft_argstype(args, strs[i]);
		}
		else
		{
			ft_putchar(strs[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
/*
int	main(void)
{
	int	ret1;
	int	ret2;

	ret1 = ft_printf("String simples: %s\n", "Ola Mundo");
	ret2 = printf("String simples: %s\n", "Ola Mundo");
	printf("Retornos: ft_printf = %d | printf = %d\n\n", ret1, ret2);
	
	ret1 = ft_printf("Char: %c\n", 'Z');
	ret2 = printf("Char: %c\n", 'Z');
	printf("Retornos: ft_printf = %d | printf = %d\n\n", ret1, ret2);
	
	ret1 = ft_printf("Decimal: %d\n", 42);
	ret2 = printf("Decimal: %d\n", 42);
	printf("Retornos: ft_printf = %d | printf = %d\n\n", ret1, ret2);
	
	ret1 = ft_printf("Unsigned: %u\n", 4294967295u);
	ret2 = printf("Unsigned: %u\n", 4294967295u);
	printf("Retornos: ft_printf = %d | printf = %d\n\n", ret1, ret2);
	
	ret1 = ft_printf("Hex lowercase: %x\n", 255);
	ret2 = printf("Hex lowercase: %x\n", 255);
	printf("Retornos: ft_printf = %d | printf = %d\n\n", ret1, ret2);
	
	ret1 = ft_printf("Hex uppercase: %X\n", 255);
	ret2 = printf("Hex uppercase: %X\n", 255);
	printf("Retornos: ft_printf = %d | printf = %d\n\n", ret1, ret2);
	
	ret1 = ft_printf("Pointer: %p\n", (void *)0x1234abcd);
	ret2 = printf("Pointer: %p\n", (void *)0x1234abcd);
	printf("Retornos: ft_printf = %d | printf = %d\n\n", ret1, ret2);
	
	ret1 = ft_printf("Percent: %%\n");
	ret2 = printf("Percent: %%\n");
	printf("Retornos: ft_printf = %d | printf = %d\n\n", ret1, ret2);
	
	return (0);
}
*/