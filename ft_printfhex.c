/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:05:24 by marvin            #+#    #+#             */
/*   Updated: 2025/11/11 18:05:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfhex(unsigned int nb, int uperlow)
{
    int len;

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
    	int num = 257;

	printf("\nreturn --> %d\n",ft_printfhex(num, 1));
	printf("\nreturn --> %d\n",ft_printfhex(num, 0));
}
*/