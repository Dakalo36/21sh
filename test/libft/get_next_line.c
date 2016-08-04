/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 17:49:30 by dnematan          #+#    #+#             */
/*   Updated: 2016/07/09 09:22:53 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_read_file(int const fd, char **str)
{
	char	*buff;
	int		ret;
	char	*temp;

	if (!(buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	ret = read(fd, buff, BUFF_SIZE);
	if (ret > 0)
	{
		buff[ret] = '\0';
		temp = ft_strjoin(*str, buff);
		free(*str);
		*str = temp;
	}
	return (ret);
}

int			get_next_line(int const fd, char **line)
{
	static char	*str;
	char		*find_newl;
	int			ret;

	if ((!str && (str = (char *)malloc(sizeof(*str))) == NULL) || !line
			|| fd < 0 || BUFF_SIZE < 0)
		return (-1);
	find_newl = ft_strchr(str, '\n');
	while (find_newl == NULL)
	{
		ret = ft_read_file(fd, &str);
		if (ret == 0)
		{
			if (ft_strlen(str) == 0)
				return (0);
			str = ft_strjoin(str, "\n");
		}
		if (ret < 0)
			return (-1);
		else
			find_newl = ft_strchr(str, '\n');
	}
	*line = ft_strsub(str, 0, ft_strlen(str) - ft_strlen(find_newl));
	str = ft_strdup(find_newl + 1);
	return (1);
}
