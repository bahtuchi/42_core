/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommehdiz <ommehdiz@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:01:30 by omedbahtuch       #+#    #+#             */
/*   Updated: 2023/11/25 17:14:42 by ommehdiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*temp_var;

	temp_var = (void *)ptr;
	while (len > 0)
	{
		*(temp_var++) = (unsigned char) c;
		len--;
	}
	return (ptr);
}
