/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <jtian@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 21:31:12 by jtian             #+#    #+#             */
/*   Updated: 2020/06/29 21:35:35 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < -9 || n > 9)
		ft_putnbr_fd(n / 10, fd);
	if (n < 0)
	{
		if (n >= -9)
			ft_putchar_fd('-', fd);
		ft_putchar_fd('0' - (n % 10), fd);
	}
	else
		ft_putchar_fd('0' + (n % 10), fd);
}
