/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:51:57 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:51:57 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		result;

	fd = 0;
	line = NULL;
	if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			return (1);
	}
	while ((result = get_next_line(fd, &line)) >= 0)
	{
		ft_putnbr(result);
		ft_putstr(": ");
		ft_putstr(line);
		free(line);
		if (result == 0)
			break ;
		ft_putchar('\n');
	}
	if (argc > 1)
		close(fd);
	return ((result < 0) ? 1 : 0);
}