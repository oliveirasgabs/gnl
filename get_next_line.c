/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrioli <gabrioli@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:05:23 by gabrioli          #+#    #+#             */
/*   Updated: 2025/12/18 18:14:43 by gabrioli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	size_t	read_len;
	char	*buffer;

	if (fd < 0)
		return NULL;
	read_len = read(fd, buffer, BUFFER_SIZE);
}
