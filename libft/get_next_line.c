/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:53:34 by obektas           #+#    #+#             */
/*   Updated: 2023/05/06 15:10:04 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*parse(char *line, char c)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (line[i] && line[i] != c)
		i++;
	if (!line[i])
	{
		free(line);
		return (0);
	}
	str = (char *)malloc((ft_strlen_gnl(line) - i) + 1);
	if (!str)
		return (0);
	i++;
	while (line[i])
		str[j++] = line[i++];
	str[j] = '\0';
	free(line);
	return (str);
}

static char	*new_line(char *line, char c)
{
	char	*str;
	int		i;

	i = 0;
	if (!line[i])
		return (0);
	while (line[i] != '\0' && line[i] != c)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (0);
	i = 0;
	while (line[i] && line[i] != c)
	{
		str[i] = line[i];
		i++;
	}
	if (line[i] == c)
	{
		str[i] = line[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	*next_line(int fd, char *line)
{
	char	*tmp;
	int		i;

	tmp = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!tmp)
		return (0);
	i = 1;
	while (!ft_strchr_gnl(line, '\n') && i != 0)
	{
		i = read(fd, tmp, BUFFER_SIZE);
		if (i == -1)
		{
			free(tmp);
			return (0);
		}
		tmp[i] = '\0';
		line = ft_strjoin_gnl(line, tmp);
	}
	free(tmp);
	return (line);
}

char	*get_next_line(int fd)
{
	char		*str;
	static char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	line = next_line(fd, line);
	if (line)
	{
		str = new_line(line, '\n');
		line = parse(line, '\n');
		return (str);
	}
	return (0);
}
/*
#include <stdio.h>
#include <fcntl.h>
int main()
{
	int k = open(".o",O_RDONLY);
	//int j = open(".o_2",O_RDONLY);
	int i = 0;
	while (i < 1)
	{
		printf("%s", get_next_line(k));
		//printf("%s", get_next_line(j));
		i++;
	}
	close(k);
	//close(j);
}*/
