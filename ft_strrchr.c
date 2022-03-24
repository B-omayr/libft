/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:05:39 by iomayr            #+#    #+#             */
/*   Updated: 2021/12/09 14:53:42 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*d;
	int		i;

	d = (char *)s;
	i = ft_strlen(d);
	while (i >= 0)
	{
		if (d[i] == (unsigned char)c)
			return (&d[i]);
		i--;
	}
	return (0);
}
