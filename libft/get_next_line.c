/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 19:04:07 by mwright           #+#    #+#             */
/*   Updated: 2017/01/20 22:58:30 by mwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_gets(char **lineread, char **line, char **temp)
{
	int			pointer;

	if (!(pointer = ft_wordlen(*lineread, '\n')) && ft_strlen(*lineread) == 0)
	{
		*line = ft_strnew(0);
		free(*temp);
		return (0);
	}
	if (!ft_strchr(*lineread, '\n') && pointer > 0)
	{
		*line = ft_strsub(*lineread, 0, pointer);
		*lineread += pointer;
		free(*temp);
		return (1);
	}
	else
	{
		*line = ft_strsub(*lineread, 0, pointer);
		*lineread += pointer + 1;
		return (1);
	}
}

int		get_next_line(const int fd, char **line)
{
	int				i;
	int				byts_rd;
	static	char	*lineread;
	char			*temp;
	char			buffer[BUFF_SIZE + 1];

	i = 0;
	if (!line || fd < 0)
		return (-1);
	temp = ft_strnew(0);
	while ((byts_rd = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[byts_rd] = 0;
		lineread = ft_strjoin(temp, buffer);
		free(temp);
		temp = lineread;
	}
	if (byts_rd == -1)
		return (-1);
	return (ft_gets(&lineread, line, &temp));
}

/*
** This function works in three main parts First, the fd is read and saved
** into buffer.  A temp variable is used to transfer all of the contents of
** the fd into the address pointed to by *lineread.
** Second, if the length of the string leading up to a \n is longer than 0
** strsub is used to put the string up to that length into
** the line pointer and the lineread address is incremented to skip
** the \n that would now be at place 1; ELSE, if the last line was
** read and no \n exists, it returns a 0 and sets *line to 0;
** IT DOES NOT YET SUPPORT MULTIPLE FILE DESCRIPTORS
*/
