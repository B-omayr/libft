/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:38:57 by iomayr            #+#    #+#             */
/*   Updated: 2021/12/09 22:26:50 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*d;
	int		i;

	i = 0;
	d = (char *)s;
	if (s[i] == '\0')
		return (NULL);
	while (d)
	{
		if (d[i] == (unsigned char)c)
			return (&d[i]);
		else if (d[i] == '\0')
			return (NULL);
		i++;
	}
	return (0);
}
