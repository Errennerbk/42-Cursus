/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadress.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerbek <eerbek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:58:00 by eerbek            #+#    #+#             */
/*   Updated: 2022/12/15 19:45:38 by eerbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	adress_len(unsigned long long num)
{
	int	lenght;

	lenght = 0;
	while (num != 0)
	{
		lenght++;
		num = num / 16;
	}
	return (lenght);
}

void	ft_put_ptr(unsigned long long num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
			ft_putchar((num - 10 + 'a'));
	}
}

int	ft_printadress(unsigned long long adress)
{
	int	lenght;

	lenght = ft_coupstr("0x");
	if (adress == 0)
		lenght += ft_putchar('0');
	else
	{
		ft_put_ptr(adress);
		lenght += adress_len(adress);
	}
	return (lenght);
}
