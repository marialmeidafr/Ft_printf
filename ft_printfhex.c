/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariaalm <mariaalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:16:08 by mariaalm          #+#    #+#             */
/*   Updated: 2025/11/12 11:16:08 by mariaalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfhex(unsigned long int nb, int uperlow)
{
	int	len;

	len = 0;
	if (nb < 16)
	{
		if (uperlow == 0)
			len += write(1, &"0123456789abcdef"[nb], 1);
		else if (uperlow == 1)
			len += write(1, &"0123456789ABCDEF"[nb], 1);
	}
	if (nb >= 16)
	{
		len += ft_printfhex(nb / 16, uperlow);
		len += ft_printfhex(nb % 16, uperlow);
	}
	return (len);
}

/*
int main(void)
{
    	int num = 255;

	printf("\nreturn --> %d\n",ft_printfhex(num, 1));
	printf("\nreturn --> %d\n",ft_printfhex(num, 0));
}
*/