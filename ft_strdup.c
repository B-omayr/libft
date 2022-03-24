/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 21:53:14 by iomayr            #+#    #+#             */
/*   Updated: 2021/12/09 21:19:41 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*ib;

	i = ft_strlen(s1);
	j = 0;
	ib = malloc(sizeof(char) * i + 1);
	if (!ib)
		return (NULL);
	while (j < i)
	{
		ib[j] = s1[j];
		j++;
	}
	ib[j] = 0;
	return (ib);
}
