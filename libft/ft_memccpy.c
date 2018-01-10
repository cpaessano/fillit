/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 17:37:22 by csilva            #+#    #+#             */
/*   Updated: 2017/09/25 23:28:44 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c,
	size_t n)
{
	while (n)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		if (*(unsigned char *)src == (unsigned char)c)
			return (++dst);
		dst++;
		src++;
		n--;
	}
	return (NULL);
}
