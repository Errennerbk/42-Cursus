/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerbek <eerbek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:44:42 by eerbek            #+#    #+#             */
/*   Updated: 2022/12/15 14:52:11 by eerbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_len(int num)
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

char	*ft_itoa(int n)
{
	int		lenght;
	char	*str;
	long	nbr;

	nbr = n;
	lenght = ft_num_len(nbr);
	if (n < 0)
	{
		lenght++;
		nbr = -nbr;
	}
	str = malloc(sizeof(char) * lenght + 1);
	if (!str)
		return (NULL);
	str[lenght] = '\0';
	while (nbr > 0)
	{
		str[--lenght] = nbr % 10 + 48;
		nbr /= 10;
	}
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	return (str);
}
