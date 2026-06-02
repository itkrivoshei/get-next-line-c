/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:53:41 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:53:41 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			size(unsigned int n)
{
	size_t			sz;

	sz = 1;
	while (n >= 10)
	{
		n /= 10;
		++sz;
	}
	return (sz);
}

char				*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	unsigned int	sz;

	if (n < 0)
		nb = (unsigned int)(-(long)n);
	else
		nb = (unsigned int)n;
	sz = size(nb);
	if (!(str = (char*)malloc(sizeof(char) * (n < 0 ? (sz += 2) : (++sz)))))
		return (NULL);
	str[--sz] = '\0';
	(n < 0) ? (str[0] = '-') : 0;
	while (nb >= 10)
	{
		str[--sz] = nb % 10 + '0';
		nb /= 10;
	}
	str[--sz] = nb % 10 + '0';
	return (str);
}
