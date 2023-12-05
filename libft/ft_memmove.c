/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommehdiz <ommehdiz@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:09:51 by ommehdiz          #+#    #+#             */
/*   Updated: 2023/12/05 11:39:47 by ommehdiz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*temp_dst;
	unsigned char	*temp_src;
	size_t				i;

	temp_dst = (unsigned char *) dst;
	temp_src = (unsigned char *) src;
	i = 0;
	/*if(!dst && !src)
		return (NULL);*/
	if (temp_dst == temp_src)
		return (dst);
	if(temp_dst < temp_src)
	{
		while (i < len)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	else
	{
		while(len-- > 0)
		{
			temp_dst[len] = temp_src[len];
		}
	}
	return (dst);
}