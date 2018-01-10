/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:06:28 by csilva            #+#    #+#             */
/*   Updated: 2017/09/25 23:29:02 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *add;

	add = dst;
	while (n)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		dst++;
		src++;
		n--;
	}
	return (add);
}
