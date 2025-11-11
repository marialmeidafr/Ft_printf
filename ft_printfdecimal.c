/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimalprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:05:20 by marvin            #+#    #+#             */
/*   Updated: 2025/11/11 18:05:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfdecimal(unsigned int nb)
{
    int len;

    len = 0;
    if (nb >= 10)
        len += ft_printfdecimal(nb / 10);
    len += ft_putchar((nb % 10) + '0');
    return (len);
}
/*
int main(void)
{
        unsigned int num = 5;
    printf("\nreturn --> %d\n", ft_printfdecimal(num));
}
*/