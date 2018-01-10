/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 18:52:14 by csilva            #+#    #+#             */
/*   Updated: 2017/10/12 18:53:49 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	char			*add;
	char			*str;
	unsigned int	i;

	str = (char *)s;
	if (!s)
		return (NULL);
	if (!(new = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	add = new;
	i = 0;
	while (*str)
		*new++ = f(i++, *str++);
	*new = '\0';
	return (add);
}
