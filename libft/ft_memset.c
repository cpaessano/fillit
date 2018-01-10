/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 10:29:32 by csilva            #+#    #+#             */
/*   Updated: 2017/09/25 23:23:10 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *add;

	add = b;
	while (len)
	{
		*(unsigned char *)b = (unsigned char)c;
		len--;
		b++;
	}
	return (add);
}
