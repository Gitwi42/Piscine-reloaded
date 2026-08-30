/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 15:35:21 by root              #+#    #+#             */
/*   Updated: 2026/08/30 17:00:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_puterr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(2, &str[i++], 1);
}

int	main(int argc, char **argv)
{
	int			fd;
	char		buffer[256];
	ssize_t		byte_read;

	if (argc == 1)
		ft_puterr("File name missing.\n");
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			ft_puterr("Cannot read file.\n");
			return (0);
		}
		byte_read = read(fd, buffer, 256);
		while (byte_read > 0)
		{
			write(1, buffer, byte_read);
			byte_read = read(fd, buffer, 256);
		}
		close(fd);
	}
	else
		ft_puterr("Too many arguments.\n");
	return (0);
}
