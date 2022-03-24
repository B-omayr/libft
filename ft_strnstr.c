/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:19:39 by iomayr            #+#    #+#             */
/*   Updated: 2021/12/09 22:27:47 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *ptr, const char *str, size_t len)
{
	size_t	j;
	size_t	i;
	char	*p;
	char	*s;

	p = (char *)ptr;
	s = (char *)str;
	i = 0;
	j = 0;
	if (s[i] == '\0' || s == NULL)
		return (p);
	while (p[j] != '\0' && j < len)
	{
		i = 0;
		while (p[i + j] && p[i + j] == s[i] && i + j < len)
		{
			if (s[i + 1] == '\0')
				return (&p[j]);
			i++;
		}
		j++;
	}
	return (0);
}
