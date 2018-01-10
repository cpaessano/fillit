/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 13:59:01 by csilva            #+#    #+#             */
/*   Updated: 2017/09/28 09:41:58 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *restrict	add;
	int				len;
	int				i;

	add = s1;
	len = ft_strlen(s1);
	i = 0;
	while (*s2)
	{
		s1[len + i] = *s2++;
		i++;
	}
	s1[len + i] = '\0';
	return (add);
}
