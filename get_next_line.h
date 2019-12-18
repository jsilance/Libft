/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 10:47:55 by jsilance          #+#    #+#             */
/*   Updated: 2019/12/18 02:25:05 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE

#  define BUFFER_SIZE 8

# endif

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include "libft.h"

int		get_next_line(int fd, char **line);
int		str_liner(char *tmp, char temp[OPEN_MAX][BUFFER_SIZE + 1],
			char **line, int fd);

#endif
