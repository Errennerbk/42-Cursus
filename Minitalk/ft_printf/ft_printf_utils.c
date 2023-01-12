/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerbek <eerbek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:59:17 by eerbek            #+#    #+#             */
/*   Updated: 2022/12/16 13:00:05 by eerbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_u_num_len(unsigned int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int		lenght;
	char	*num;

	lenght = 0;
	num = ft_itoa(n);
	lenght = ft_coupstr(num);
	free(num);
	return (lenght);
}

int	ft_coupstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		lenght;

	lenght = ft_u_num_len(n);
	num = (char *)malloc(sizeof(char) * (lenght + 1));
	if (!num)
		return (0);
	num[lenght] = '\0';
	while (n != 0)
	{
		num[lenght - 1] = n % 10 + 48;
		n = n / 10;
		lenght--;
	}
	return (num);
}
