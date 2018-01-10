/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 00:09:33 by csilva            #+#    #+#             */
/*   Updated: 2017/10/12 18:48:00 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		size;
	char	*str;
	long	i;

	size = ft_nbr_size(n);
	str = ft_strnew(size);
	i = (long)n;
	if (!str)
		return (NULL);
	if (i < 0)
	{
		str[0] = '-';
		i = -i;
	}
	str[size--] = '\0';
	str[size--] = (i % 10) + '0';
	while (i >= 10)
	{
		i = i / 10;
		str[size--] = (i % 10) + '0';
	}
	return (str);
}
