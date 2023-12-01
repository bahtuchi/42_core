/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommehdiz <ommehdiz@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:06:49 by omedbahtuch       #+#    #+#             */
/*   Updated: 2023/11/29 10:13:22 by ommehdiz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	tmp_s1 = (unsigned char *) s1;
	tmp_s2 = (unsigned char *) s2;
	if (!s1 && !s2)
	{
		return (0);
	}
	while ((n > 0) && *tmp_s1 == *tmp_s2)
	{
		tmp_s1++;
		tmp_s2++;
		n--;
	}
	if (n)
	{
		return (*tmp_s1 - *tmp_s2);
	}
	else
		return (0);
}