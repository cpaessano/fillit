/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 19:15:25 by csilva            #+#    #+#             */
/*   Updated: 2017/10/12 18:56:18 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		while (*s1 && (unsigned char)*s1 == (unsigned char)*s2)
		{
			s1++;
			s2++;
		}
		if ((unsigned char)*s1 == (unsigned char)*s2)
			return (1);
	}
	return (0);
}
