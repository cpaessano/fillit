/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 10:06:09 by csilva            #+#    #+#             */
/*   Updated: 2017/10/13 16:22:01 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	size_t			end;
	size_t			len;
	char			*new;
	char			*str;

	start = 0;
	end = 0;
	new = NULL;
	str = (char *)s;
	if (!str)
		return (new);
	len = ft_strlen(str);
	while (ft_iswhitespace(*(str++)))
		start++;
	if (*str == '\0')
		return (ft_strnew(0));
	while (*str)
		str++;
	str--;
	while (ft_iswhitespace(*(str--)))
		end++;
	new = ft_strsub(s, start, len - end - start);
	return (new);
}
