/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:26:51 by iomayr            #+#    #+#             */
/*   Updated: 2022/03/09 11:56:26 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find(const char *s, char c)
{
	int	p;
	int	j;

	p = 1;
	j = 1;
	while (s && s[j] != '\0')
	{
		if (s[j] == c)
		{
			if (s[j + 1] == c)
				p -= 1;
			else if (s[j + 1] == '\0')
				p -= 1;
			p++;
		}
		j++;
	}
	return (p);
}

static char	*ft_print(const char *s, size_t start, size_t end)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc((end - start + 1) * (sizeof(char)));
	while (start < end)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	p;
	size_t	j;
	int		i;

	i = -1;
	j = 0;
	p = -1;
	if (!s)
		return (0);
	ptr = malloc(sizeof(char *) * (find(s, c) + 1));
	if (!ptr)
		return (0);
	while (++p <= ft_strlen(s))
	{
		if (s[p] != c && i < 0)
			i = p;
		else if ((s[p] == c || p == ft_strlen(s)) && i >= 0)
		{
			ptr[j++] = ft_print(s, i, p);
			i = -1;
		}
	}
	ptr[j] = 0;
	return (ptr);
}

 salam haw haw 