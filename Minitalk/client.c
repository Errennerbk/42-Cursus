/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerbek <eerbek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:37:20 by eerbek            #+#    #+#             */
/*   Updated: 2023/01/10 15:01:05 by eerbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	res;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57 && str[i])
	{
		res = (str[i] -48) + (res * 10);
		i++;
	}
	return (res * s);
}

void	ft_send_signal(int pid, char *str)
{
	int				i;
	unsigned char	c;

	while (*str)
	{
		i = 8;
		c = *str++;
		while (i--)
		{
			if ((c >> i) & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
		}
	}
}

int	main(int argc, char *argv[])
{
	int	pid;

	if (argc != 3)
	{
		ft_printf("Hatali giris !! 3 argüman girmelisiniz !!");
		return (0);
	}
	pid = ft_atoi(argv[1]);
	ft_send_signal(pid, argv[2]);
}
