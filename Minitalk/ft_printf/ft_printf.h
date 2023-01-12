/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerbek <eerbek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:21:58 by eerbek            #+#    #+#             */
/*   Updated: 2022/12/15 16:32:22 by eerbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_printadress(unsigned long long adress);
int		ft_putnbr(int n);
int		ft_print_u_nbr(unsigned int n);
int		ft_put_hex(unsigned int num, int n);
int		ft_coupstr(char *str);
int		ft_strlen(char *str);
int		ft_printf(const char *s, ...);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);

#endif
