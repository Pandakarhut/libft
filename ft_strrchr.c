/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtian <jingtian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 15:19:19 by jtian             #+#    #+#             */
/*   Updated: 2020/07/01 16:22:19 by jingtian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	character;

	ptr = (char *)s + ft_strlen(s);
	character = (char)c;
	while (ptr >= s)
	{
		if (*ptr == character)
			return (ptr);
		ptr--;
	}
	return (NULL);
}
