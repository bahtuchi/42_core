/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommehdiz <ommehdiz@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:06:52 by omedbahtuch       #+#    #+#             */
/*   Updated: 2023/11/29 10:20:12 by ommehdiz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	if (!s)
		return ((void *) str);
	while (n > 0)
	{
		if (*str == c)
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
