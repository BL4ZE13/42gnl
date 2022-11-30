/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:31:10 by diomarti          #+#    #+#             */
/*   Updated: 2022/11/30 20:31:10 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <fcntl.h>
# include <unistd.h>

char	*get_next_line(int fd);

int		ft_strlen(char *str);

char	*ft_strjoin(char *str1, char *str2);

int		ft_clear(char *str);

#endif
