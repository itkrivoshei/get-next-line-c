/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:51:40 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:51:40 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char			*ft_strjoin_fr(char const *s1, char const *s2)
{
	char		*res;

	res = ft_strjoin(s1, s2);
	free((char *)s1);
	return (res);
}

void			ft_swap_mem(char *str, char **rem)
{
	char		*tmp;

	if (*str)
	{
		tmp = *rem;
		*rem = ft_strdup(str);
		free(tmp);
	}
}

int				ft_rem(char **line, char **rem, char **p_nl)
{
	if (*rem && **rem)
	{
		if ((*p_nl = ft_strchr(*rem, '\n')))
		{
			**p_nl = '\0';
			*line = ft_strjoin_fr(*line, *rem);
			ft_swap_mem(++(*p_nl), rem);
			if (ft_strequ(*rem, *line))
				ft_strclr(*rem);
			return (1);
		}
		else
			*line = ft_strjoin_fr(*line, *rem);
		if (!ft_strchr(*rem, '\n'))
			ft_strclr(*rem);
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	char		*p_nl;
	static char	*rem[OPEN_MAX];
	int			rd;

	if (fd < 0 || !line || fd >= OPEN_MAX)
		return (-1);
	*line = ft_strnew(0);
	if (ft_rem(line, &rem[fd], &p_nl))
		return (1);
	while ((rd = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[rd] = '\0';
		if ((p_nl = ft_strchr(buf, '\n')))
		{
			*p_nl = '\0';
			ft_swap_mem(++p_nl, &rem[fd]);
			*line = ft_strjoin_fr(*line, buf);
			return (1);
		}
		*line = ft_strjoin_fr(*line, buf);
	}
	return ((**line && !rd) ? 1 : rd);
}