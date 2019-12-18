/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 22:48:38 by jsilance          #+#    #+#             */
/*   Updated: 2019/12/18 02:24:40 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			str_liner(char *tmp, char temp[OPEN_MAX][BUFFER_SIZE + 1],
				char **line, int fd)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!tmp || !temp)
		return (-1);
	while (tmp[i])
		if (tmp[i] == '\n')
		{
			if (tmp[i += (tmp[i] == '\n')])
				while (tmp[i])
					temp[fd][j++] = tmp[i++];
			temp[fd][j] = 0;
			return (0);
		}
		else if (!(*line = ft_charstock(*line, tmp[i++])))
			return (-1);
	temp[fd][0] = 0;
	return (1);
}
