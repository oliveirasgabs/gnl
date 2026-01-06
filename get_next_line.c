/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrioli <gabrioli@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:05:23 by gabrioli          #+#    #+#             */
/*   Updated: 2026/01/06 11:45:27 by gabrioli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*fill_line(int fd, char *buffer, char *left_str)
{
	ssize_t	read_len;
	char	*tmp;

	read_len = 1;
	while (read_len > 0)
	{
		read_len = read(fd, buffer, BUFFER_SIZE);
		if (read_len < 0)
		{
			free(buffer);
			return (NULL);
		}
		else if (read_len == 0)
			break;
		buffer[read_len] = '\0';
		if (!left_str)
			left_str = ft_calloc(1,1);
		tmp = left_str;
		left_str = ft_strjoin(tmp, buffer);
		free(tmp);
		if((ft_strchr(buffer, '\n')))
			break;
	}
	return (left_str);
}
static char	*set_line(char	*line)
{
	char	*left_str;
	int	i;
	int	size;

	i = 0;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	if (line[i] == 0 || line[1] == 0)
		return (NULL);
	size = ft_strlen(line);
	left_str = ft_substr(line, i + 1, size - i);
	line[i + 1] = '\0';
	return (left_str);
}

char	*get_next_line(int fd)
{
	static char	*left_str = NULL;
	char		*line;
	char		*buffer;

	if (fd < 0 || fd > 1024)
		return (NULL);
	buffer = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	line = fill_line(fd, buffer, left_str);
	free(buffer);
	if (!line || *line == '\0')
	{
		free(line);
		line = NULL;
		return (NULL);
	}
	left_str = set_line(line);
	return (line);
}
/*
#include <stdio.h>
#include <fcntl.h>
int	main()
{
	char *line;
	int fd;

	fd = open("test.txt", O_RDONLY);
	while((line = get_next_line(fd)) != NULL) {
		printf("%s", line);
		free(line);
	}
	close(fd);
}*/
