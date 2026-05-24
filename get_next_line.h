/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:51:32 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:51:32 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFF_SIZE
#  define BUFF_SIZE 32
# endif

# include <fcntl.h>
# include <unistd.h>
# include <limits.h>
# include <sys/stat.h>
# include <sys/types.h>
# include "./libft/libft.h"

int		get_next_line(const int fd, char **line);

#endif