/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:31:13 by diomarti          #+#    #+#             */
/*   Updated: 2022/12/05 14:29:33 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *str)
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

char	*ft_strjoin(char *str1, char *str2)
{
	char	*l_saved;
	int		i;
	int		j;

	i = 0;
	j = 0;
	l_saved = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!l_saved)
		return (NULL);
	while (str1 && str1[i])
	{
		l_saved[i] = str1[i];
		i++;
	}
	free (str1);
	while (str2[j])
	{
		l_saved[i++] = str2[j];
		if (str2[j++] == '\n')
			break ;
	}
	l_saved[i] = '\0';
	return (l_saved);
}

int	ft_clear(char *str)
{
	int	i;
	int	j;
	int	l_true;

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
