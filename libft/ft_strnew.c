/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:58:19 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:58:19 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

char		*ft_strnew(size_t size)
{
	if (size > SIZE_MAX)
		return (NULL);
	return ((char *)ft_memalloc(sizeof(char) * (size + 1)));
}