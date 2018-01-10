/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 21:29:29 by csilva            #+#    #+#             */
/*   Updated: 2017/09/27 16:00:43 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;
	char *save;

	str = (char *)s;
	save = NULL;
	while (*str)
	{
		if (*str == (unsigned char)c)
		{
			save = str;
			if (*(str + 1) == '\0')
				return (save);
		}
		str++;
	}
	if ((unsigned char)c == '\0')
		return (str);
	return (save);
}
