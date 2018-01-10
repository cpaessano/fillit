/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 18:39:34 by csilva            #+#    #+#             */
/*   Updated: 2017/10/12 18:56:54 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *new;
	char *add;
	char *str;

	str = (char *)s;
	if (!s)
		return (NULL);
	if (!(new = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	add = new;
	while (*str)
		*new++ = f(*str++);
	*new = '\0';
	return (add);
}
