/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerbek <eerbek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:11:35 by eerbek            #+#    #+#             */
/*   Updated: 2022/12/21 13:11:37 by eerbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	index;
	size_t	dest_index;

	if (n <= ft_strlen(dest))
		return (ft_strlen(src) + n);
	index = 0;
	dest_index = ft_strlen(dest);
	while (*(src + index) && dest_index + 1 < n)
		*(dest + dest_index++) = *((char *)(src + index++));
	*(dest + dest_index) = '\0';
	return (ft_strlen(dest) + ft_strlen(src + index));
}
