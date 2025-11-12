/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:23:04 by mariaalm          #+#    #+#             */
/*   Updated: 2025/11/12 17:23:04 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfptr(void *ptr)
{
	int	result;

	result = 0;
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	else
		result += ft_putstr("0x");
	result += ft_printfhex((unsigned long int) ptr, 0);
	return (result);
}
/*
int	main(void)
{
	int n = 255;

	printf("%d\n", ft_printfptr(&n));
}
*/