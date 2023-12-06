/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommehdiz <ommehdiz@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:51:30 by ommehdiz          #+#    #+#             */
/*   Updated: 2023/12/06 09:22:39 by ommehdiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (*little == '\0')
		return ((void *) big);
	while (*big != '\0' && len >= little_len)
	{
		if (*big == *little)
		{
			while (*little != '\0')
			{
				big++;
				little++;
			}
			return ((void *) big);
		}
		len--;
	}
	return (NULL);
}
