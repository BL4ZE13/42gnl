/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:16:53 by diomarti          #+#    #+#             */
/*   Updated: 2022/11/29 12:18:13 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

int	ft_clear(char *str)
{
	int i;
	int j;
	int l_true;

	i = 0;
	j = 0;
	l_true = 0;
	while (str[i])
	{
		if (l_true)
			str[j++] = str[i];
		if (str[i] == '\n')
			l_true = 1;
		str[i++] = '\0';
	}
	return (l_true);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	while (s1 && s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	free(s1);
	while (s2[j])
	{
		ptr[i++] = s2[j];
		if (s2[j++] == '\n')
			break ;
	}
	ptr[i] = '\0';
	return (ptr);
}
