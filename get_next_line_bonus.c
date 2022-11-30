/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:31:06 by diomarti          #+#    #+#             */
/*   Updated: 2022/11/30 20:31:06 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	saved[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			i;

	i = 0;
	if (BUFFER_SIZE < 1 || read (fd, 0, 0) < 0 || fd >= FOPEN_MAX)
	{
		while (fd >= 0 && fd <= FOPEN_MAX && saved[fd][i])
			saved[fd][i++] = 0;
		return (NULL);
	}
	line = NULL;
	while (saved[fd][0] || read(fd, saved[fd], BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, saved[fd]);
		if (ft_clear(saved[fd]))
			break ;
	}
	return (line);
}
