/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 18:36:54 by csilva            #+#    #+#             */
/*   Updated: 2017/09/25 10:09:21 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *add;

	add = dst;
	while (*src && len)
	{
		*dst = *src;
		src++;
		dst++;
		len--;
	}
	while (len)
	{
		*dst++ = '\0';
		len--;
	}
	return (add);
}
