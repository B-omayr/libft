/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:31:26 by iomayr            #+#    #+#             */
/*   Updated: 2021/12/09 22:31:32 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	h;

	h = n;
	if (h < 0)
	{
		ft_putchar_fd('-', fd);
		h = -h;
	}
	if (h < 10)
		ft_putchar_fd(h + 48, fd);
	else
	{
		ft_putnbr_fd(h / 10, fd);
		ft_putnbr_fd(h % 10, fd);
	}
}
