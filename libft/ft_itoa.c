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
	unsigned int	pos;

	if (n < 0)
		nb = (unsigned int)(-(long)n);
	else
		nb = (unsigned int)n;
	sz = size(nb) + 1;
	if (n < 0)
		sz++;
	if (!(str = (char*)malloc(sizeof(char) * sz)))
		return (NULL);
	pos = sz - 1;
	str[pos] = '\0';
	while (nb >= 10)
	{
		str[--pos] = nb % 10 + '0';
		nb /= 10;
	}
	str[--pos] = nb % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
