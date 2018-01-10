/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:58:37 by csilva            #+#    #+#             */
/*   Updated: 2017/11/17 19:53:42 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

#include <stdio.h>

void	print_grid(char **grid, int pieces)
{
	int	i;

	i = 0;
	while (i < pieces)
	{
		ft_putstr(grid[i]);
		ft_putchar('\n');
		i++;
	}
}

int		solve(char **puzzle, int pieces)
{
	char	**grid;
	int		grid_size;

	grid_size = init_size(pieces);
	grid = setup_grid(grid_size);
	if (!grid)
		return (0);
	while (!(recursion(grid, puzzle, 0, 0)))
	{
		grid_size++;
		grid = setup_grid(grid_size);
		if (!grid)
			return (0);
	}
	print_grid(grid, grid_size);
	return (1);
}
