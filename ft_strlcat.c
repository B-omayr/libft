/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:00:53 by iomayr            #+#    #+#             */
/*   Updated: 2021/12/09 19:55:48 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	b;
	size_t	d;
	char	*m;

	j = 0;
	m = (char *)src;
	d = ft_strlen(dst);
	if (size <= ft_strlen(dst))
		b = ft_strlen(m) + size;
	else
		b = ft_strlen(dst) + ft_strlen(m);
	while (m[j] != '\0' && d + 1 < size)
	{
		dst[d] = m[j];
		j++;
		d++;
	}
	dst[d] = '\0';
	return (b);
}
