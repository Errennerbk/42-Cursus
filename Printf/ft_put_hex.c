/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerbek <eerbek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:53:36 by eerbek            #+#    #+#             */
/*   Updated: 2022/12/15 16:38:06 by eerbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int num)
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

void	ft_put(unsigned int num, int n)
{
	if (num >= 16)
	{
		ft_put(num / 16, n);
		ft_put(num % 16, n);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
		{
			if (n == 'x')
				ft_putchar((num - 10 + 'a'));
			else if (n == 'X')
				ft_putchar((num - 10 + 'A'));
		}
	}
}

int	ft_put_hex(unsigned int num, int n)
{
	if (num == 0)
		return (ft_putchar('0'));
	ft_put(num, n);
	return (ft_hex_len(num));
}
