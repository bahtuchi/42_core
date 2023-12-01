/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommehdiz <ommehdiz@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:06:52 by omedbahtuch       #+#    #+#             */
/*   Updated: 2023/12/01 12:25:48 by ommehdiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		unsigned_c;

	str = (const unsigned char *)s;
	unsigned_c = (unsigned char) c;
	if (!s)
		return ((void *) str);
	while (n > 0)
	{
		if (*str == unsigned_c)
		{
			return ((void *) str);
		}
		str++;
		n--;
	}
	if (n)
		return ((void *) str);
	return (0);
}
