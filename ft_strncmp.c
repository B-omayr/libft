/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:18:46 by iomayr            #+#    #+#             */
/*   Updated: 2021/12/09 19:57:03 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*m;
	unsigned char	*b;

	m = (unsigned char *) s1;
	b = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (m[i] && b[i] && m[i] == b[i] && i < n - 1)
		i++;
	return (m[i] - b[i]);
}
