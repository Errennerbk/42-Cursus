/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerbek <eerbek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:54:07 by eerbek            #+#    #+#             */
/*   Updated: 2023/01/10 16:25:53 by eerbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include "./ft_printf/ft_printf.h"

int		ft_atoi(char *str);
void	ft_bit_write(int x);
void	ft_signal_control(int x);
void	ft_send_signal(int pid, char *str);

#endif