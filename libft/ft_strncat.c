/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 14:52:28 by csilva            #+#    #+#             */
/*   Updated: 2017/09/25 23:29:37 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*add;
	int		len;
	int		i;

	add = s1;
	len = ft_strlen(s1);
	i = 0;
	while (*s2 && n)
	{
		s1[len + i] = *s2++;
		i++;
		n--;
	}
	s1[len + i] = '\0';
	return (add);
}
