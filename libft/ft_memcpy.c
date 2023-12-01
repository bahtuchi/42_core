/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommehdiz <ommehdiz@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:18:07 by ommehdiz          #+#    #+#             */
/*   Updated: 2023/12/01 12:18:20 by ommehdiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;

	temp_dst = (void *) dst;
	temp_src = (void *) src;
	if (!src && !dst)
		return (dst);
	while (n > 0)
	{
		*temp_dst = *temp_src;
		temp_dst++;
		temp_src++;
		n--;
	}
	return (dst);
}
