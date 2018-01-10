/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 09:26:26 by csilva            #+#    #+#             */
/*   Updated: 2017/09/26 21:24:43 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *str1;
	char *add;

	if (!(str1 = ft_memalloc((ft_strlen((char *)s1) + 1))))
		return (NULL);
	add = str1;
	while (*s1)
		*str1++ = *s1++;
	*str1 = '\0';
	return (add);
}
