/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <jtian@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:29:43 by jtian             #+#    #+#             */
/*   Updated: 2020/06/29 18:32:40 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	unsigned char *s1_b;
	unsigned char *s2_b;
	s1_b = (unsigned char*) s1;
	s2_b = (unsigned char*) s2;

	i = 0;
	while ((s1_b[i] || s2_b[i]) && i < n)
	{
		if (s1_b[i] != s2_b[i])
			return (s1_b[i] - s2_b[i]);
		i++;
	}
	return (0);
}
