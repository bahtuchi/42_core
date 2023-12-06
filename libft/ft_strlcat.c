/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommehdiz <ommehdiz@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:34:42 by ommehdiz          #+#    #+#             */
/*   Updated: 2023/12/05 14:21:39 by ommehdiz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srclen;

	i = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (i + srclen);
	if (i >= dstsize)
		return (i + srclen);
	j = 0;
	while (src[j] != '\0' && j < dstsize- i - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + srclen);
}

wefjweifj


