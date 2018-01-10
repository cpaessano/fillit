/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 22:37:25 by csilva            #+#    #+#             */
/*   Updated: 2017/10/13 17:02:24 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char *b;
	char *l;
	char *save;

	b = (char *)big;
	l = (char *)little;
	if (!*l)
		return (b);
	while (*b)
	{
		save = b;
		if (ft_strncmp(b, l, ft_strlen(l)) == 0)
			return (save);
		b++;
	}
	return (NULL);
}
