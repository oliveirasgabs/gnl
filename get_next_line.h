/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrioli <gabrioli@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:05:43 by gabrioli          #+#    #+#             */
/*   Updated: 2026/01/02 16:16:49 by gabrioli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	GET_NEXT_LINE_H
# define	GET_NEXT_LINE_H
#ifndef	BUFFER_SIZE
# define    BUFFER_SIZE 42
#endif
#include <stdlib.h>
#include <stdint.h>

char	*get_next_line(int fd);
void	*ft_calloc(size_t nmemb, size_t size);

#endif
