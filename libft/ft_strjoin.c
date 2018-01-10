/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 09:29:27 by csilva            #+#    #+#             */
/*   Updated: 2017/10/11 14:26:26 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pref;
	char	*suff;
	char	*new;
	size_t	len;

	pref = (char *)s1;
	suff = (char *)s2;
	if (pref && suff)
	{
		len = ft_strlen(pref) + ft_strlen(suff);
		if (!(new = ft_memalloc(len + 1)))
			return (NULL);
		ft_strcpy(new, pref);
		return (ft_strcat(new, suff));
	}
	return (NULL);
}
