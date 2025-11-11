/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:05:36 by marvin            #+#    #+#             */
/*   Updated: 2025/11/11 18:05:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int	nb;
	int			len;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		len += ft_putchar('-');
	}
	if (nb > 9)
		len += ft_putnbr(nb / 10);
	len += ft_putchar((nb % 10) + '0');
	return (len);
}

int 