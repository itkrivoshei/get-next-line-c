/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:57:02 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:57:02 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t sz)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < sz && dst[i])
		i++;
	while (src[j] && (i + j + 1) < sz)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < sz)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
