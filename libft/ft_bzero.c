/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommehdiz <ommehdiz@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 07:46:43 by omedbahtuch       #+#    #+#             */
/*   Updated: 2023/12/01 12:16:33 by ommehdiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr_s;

	ptr_s = (char *) s;
	if (n == 0)
		return ;
	else
	{
		while (n > 0)
		{
			*ptr_s = 0;
			n--;
			ptr_s++;
		}
	}
}
