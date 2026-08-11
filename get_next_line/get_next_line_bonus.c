/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 02:50:26 by rimatos-          #+#    #+#             */
/*   Updated: 2026/08/11 02:50:27 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*fill_storage(int fd, char *storage)
{
	char	*tmp_memory_location;
	char	*buffer;
	ssize_t	bytes_read;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (free(storage), NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(buffer), free(storage), NULL);
		buffer[bytes_read] = '\0';
		if (bytes_read == 0)
			break ;
		tmp_memory_location = storage;
		storage = ft_strjoin(storage, buffer);
		free(tmp_memory_location);
		if (!storage)
			return (free(buffer), NULL);
		if (ft_strchr(storage, '\n'))
			break ;
	}
	return (free(buffer), storage);
}

static char	*extract_line(char *storage)
{
	char	*line;
	size_t	i;

	if (!storage || storage[0] == '\0')
		return (NULL);
	i = 0;
	while (storage[i] && storage[i] != '\n')
		i++;
	if (storage[i] == '\n')
		i++;
	line = ft_substr(storage, 0, i);
	return (line);
}

static char	*update_storage(char *storage)
{
	char	*new_storage;
	size_t	i;

	i = 0;
	while (storage[i] && storage[i] != '\n')
		i++;
	if (storage[i] == '\0')
	{
		free(storage);
		return (NULL);
	}
	new_storage = ft_substr(storage, i + 1, ft_strlen(storage) - i);
	free(storage);
	return (new_storage);
}

char	*get_next_line(int fd)
{
	static char	*storage[1024];
	char		*line;

	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	storage[fd] = fill_storage(fd, storage[fd]);
	if (!storage[fd] || storage[fd][0] == '\0')
	{
		free(storage[fd]);
		storage[fd] = NULL;
		return (NULL);
	}
	line = extract_line(storage[fd]);
	if (!line)
	{
		free(storage[fd]);
		storage[fd] = NULL;
		return (NULL);
	}
	storage[fd] = update_storage(storage[fd]);
	return (line);
}
