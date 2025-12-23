/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrioli <gabrioli@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:05:43 by gabrioli          #+#    #+#             */
/*   Updated: 2025/12/22 20:45:17 by gabrioli         ###   ########.fr       */
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

#endif