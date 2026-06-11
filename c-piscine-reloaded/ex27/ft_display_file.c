/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:52:08 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/28 12:24:26 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_put_str_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
	return (1);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		bytes;
	char	buf[1024];

	if (argc == 1)
		return (ft_put_str_fd("File name missing.\n", 2));
	if (argc > 2)
		return (ft_put_str_fd("Too many arguments.\n", 2));
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_put_str_fd("Cannot read file.\n", 2));
	bytes = read(fd, buf, 1024);
	while (bytes > 0)
	{
		write(1, buf, bytes);
		bytes = read(fd, buf, 1024);
	}
	close(fd);
	return (0);
}
