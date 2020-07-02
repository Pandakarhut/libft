/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <jtian@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 19:49:43 by jtian             #+#    #+#             */
/*   Updated: 2020/06/29 21:03:25 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s || !(sub = (char *)malloc(len + 1)))
		return (NULL);
	i = 0;
	while (i < len && s[i])
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
