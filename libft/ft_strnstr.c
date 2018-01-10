/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 23:06:32 by csilva            #+#    #+#             */
/*   Updated: 2017/10/13 17:02:19 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	char *b;
	char *l;
	char *save;

	b = (char *)big;
	l = (char *)little;
	if (!*l)
		return (b);
	while (*b && (size_t)ft_strlen(l) <= n)
	{
		save = b;
		if (ft_strncmp(b, l, ft_strlen(l)) == 0)
			return (save);
		n--;
		b++;
	}
	return (NULL);
}
