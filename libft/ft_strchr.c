/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 14:39:14 by csilva            #+#    #+#             */
/*   Updated: 2017/09/27 17:26:16 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char *)s;
	while (*str)
	{
		if (*str != (char)c)
			str++;
		else
			return (str);
	}
	if ((char)c == '\0')
		return (str);
	return (NULL);
}
