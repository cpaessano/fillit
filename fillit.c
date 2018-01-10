/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 18:27:28 by csilva            #+#    #+#             */
/*   Updated: 2017/11/17 20:08:54 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_read_file(int fd, char *str)
{
	int		size;
	char	tmp[BUF_SIZE + 1];

	size = 0;
	size = read(fd, &tmp, BUF_SIZE + 1);
	tmp[size] = '\0';
	ft_strcpy(str, tmp);
	close(fd);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	tetris[BUF_SIZE];

	if (argc != 2)
	{
		ft_putstr("usage: fillit [filepath] [filename.txt]\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		error();
	ft_read_file(fd, tetris);
	if (!check_tetrimino(tetris) || !check_char(tetris) ||
			!check_line(tetris) || !check_form(tetris))
		error();
	puzzle(tetris);
	return (0);
}
