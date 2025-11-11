/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:06:27 by marvin            #+#    #+#             */
/*   Updated: 2025/11/11 18:06:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printfptr(void *ptr)
{
    int result;

    result = 0;
    if (ptr == NULL)
        return (ft_putstr("(null)"));
    else
        result += ft_putstr("0x");
    result += ft_printfhex((unsigned long int) ptr, 0);
    return (result);
}

int	main(void)
{
	int n = 255;

	printf("%d\n", ft_printfptr(&n));
}