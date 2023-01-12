/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerbek <eerbek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:05:48 by eerbek            #+#    #+#             */
/*   Updated: 2022/12/21 14:03:15 by eerbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	find_after(const char	*type, va_list arg, int *pos)
{
	int		counter;

	counter = 0;
	*pos += 1;
	if (type[*pos] == 'c')
		counter = ft_putchar(va_arg(arg, int));
	else if (type[*pos] == 's')
		counter = ft_coupstr(va_arg(arg, char *));
	else if (type[*pos] == 'p')
		counter = ft_printadress(va_arg(arg, unsigned long long ));
	else if (type[*pos] == 'd' || type[*pos] == 'i')
		counter = ft_putnbr(va_arg(arg, int));
	else if (type[*pos] == 'u')
		counter = ft_print_u_nbr(va_arg(arg, unsigned int));
	else if (type[*pos] == 'x')
			counter = ft_put_hex(va_arg(arg, int), 120);
	else if (type[*pos] == 'X')
			counter = ft_put_hex(va_arg(arg, int), 88);
	else if (type[*pos] == '%')
			counter = ft_putchar('%');
	return (counter);
}

int	ft_printf(const char *type, ...)
{
	va_list	arg;
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	va_start(arg, type);
	while (type[i])
	{
		if (type[i] != '%')
			counter += ft_putchar(type[i]);
		else
			counter += find_after(type, arg, &i);
		if (type[i] != '\0')
			i++;
	}
	va_end(arg);
	return (counter);
}
