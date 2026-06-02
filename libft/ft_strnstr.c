/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:58:24 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:58:24 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hstk, const char *ndle, size_t len)
{
	size_t p1;
	size_t p2;

	if (*ndle == '\0')
		return ((char *)hstk);
	p1 = 0;
	while (p1 < len && hstk[p1] != '\0')
	{
		if (hstk[p1] == ndle[0])
		{
			p2 = 1;
			while (p1 + p2 < len && ndle[p2] != '\0'
					&& hstk[p1 + p2] == ndle[p2])
				p2++;
			if (ndle[p2] == '\0')
				return ((char*)&hstk[p1]);
		}
		p1++;
	}
	return (NULL);
}
