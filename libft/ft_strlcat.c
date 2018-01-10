/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 10:38:43 by csilva            #+#    #+#             */
/*   Updated: 2017/09/26 19:37:02 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s1;
	char	*s2;
	size_t	len;
	size_t	n;

	s1 = (char *)dst;
	s2 = (char *)src;
	n = size;
	while (n-- && *s1)
		s1++;
	len = s1 - dst;
	n = size - len;
	if (n == 0)
		return (len + ft_strlen(s2));
	while (*s2)
	{
		if (n != 1)
		{
			*s1++ = *s2;
			n--;
		}
		s2++;
	}
	*s1 = '\0';
	return (len + (s2 - src));
}
