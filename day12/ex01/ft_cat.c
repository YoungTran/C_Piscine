/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 21:31:32 by ytran             #+#    #+#             */
/*   Updated: 2018/03/29 22:17:14 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		bytes;
	char	content[4096];

	if (argc < 2)
	{
		while ((bytes = read(STDIN_FILENO, content, sizeof(content))))
			write(1, content, bytes);
	}
	i = 0;
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		while ((bytes = read(fd, content, sizeof(content) - 1)))
			write(STDOUT_FILENO, content, bytes);
		close(fd);
	}
	return (0);
}
