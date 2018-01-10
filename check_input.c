/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:25:37 by csilva            #+#    #+#             */
/*   Updated: 2017/11/17 21:58:38 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_form(char *str)
{
	int i;
	int j;
	int line;

	i = 0;
	j = 20;
	line = 0;
	while (str[i])
	{
		while (i < j)
		{
			if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
				return (0);
			i++;
		}
		j = 21 + j;
		i++;
	}
	return (1);
}

int	check_line(char *str)
{
	int i;
	int j;
	int line;

	i = 0;
	j = 20;
	line = 0;
	while (str[i])
	{
		while (i < j)
		{
			if (str[i] == '\n')
			{
				line++;
				if (str[i + 1] == '\n')
					if (line % 4 != 0 || str[i + 2] == '\n')
						return (0);
			}
			i++;
		}
		j = 21 + j;
		i++;
	}
	return (1);
}

int	check_char(char *str)
{
	int i;
	int j;
	int char_count;

	i = 0;
	j = 20;
	char_count = 0;
	while (str[i])
	{
		while (i < j)
		{
			if (str[i] == '.' || str[i] == '#')
				char_count++;
			i++;
		}
		if (char_count != 16)
			return (0);
		char_count = 0;
		j = 21 + j;
		i++;
	}
	return (1);
}

int	check_hash(char *str, int line, int i)
{
	int k;

	k = 0;
	if (str[i] == '#')
	{
		if (str[i - 1] == '#')
			k++;
		if (str[i + 1] == '#')
			k++;
		if (line == 0)
			if (str[i + 5] == '#')
				k++;
		if (line == 3)
			if (str[i - 5] == '#')
				k++;
		if (line == 1 || line == 2)
		{
			if (str[i - 5] == '#')
				k++;
			if (str[i + 5] == '#')
				k++;
		}
	}
	return (k);
}

int	check_tetrimino(char *str)
{
	int i;
	int j;
	int k;
	int line;

	i = 0;
	j = 20;
	line = 0;
	while (str[i])
	{
		while (i < j)
		{
			if (str[i] == '\n')
				line++;
			k += check_hash(str, line, i);
			i++;
		}
		if (k != 6 && k != 8)
			return (0);
		k = 0;
		line = 0;
		j = 21 + j;
		i++;
	}
	return (1);
}
