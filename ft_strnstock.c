/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstock.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 02:57:58 by jsilance          #+#    #+#             */
/*   Updated: 2019/11/24 05:31:04 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Concatene from the n first character from a mallocated sting[*1] and a
**	simple string to a new mallocated string, before return the adress of the
**	new mallocated string it free the inputed mallocated string[*1].
*/

char	*ft_strnstock(char *ptr, const char *str, size_t len)
{
	char	*new_ptr;
	size_t	i;

	i = 0;
	new_ptr = ft_strdup("");
	while (str && *str && i++ < len)
		new_ptr = ft_charstock(new_ptr, *str++);
	free(ptr);
	return (new_ptr);
}
