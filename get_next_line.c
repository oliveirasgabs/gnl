/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrioli <gabrioli@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:05:23 by gabrioli          #+#    #+#             */
/*   Updated: 2025/12/22 20:55:16 by gabrioli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	size_t	read_len;
	char *buffer;
	static char	*tank = NULL;

	if (fd < 0 || fd > 1024)
		return (NULL);
	buffer = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	read_len = read(fd, buffer, BUFFER_SIZE);
	if (read_len < 0)
		return (NULL);
		
}
