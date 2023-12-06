/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommehdiz <ommehdiz@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:48:40 by ommehdiz          #+#    #+#             */
/*   Updated: 2023/12/06 13:17:32 by ommehdiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_number_length(int n)
{
	size_t	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		length = length + 1;
	while (n != 0)
	{
		length = length + 1;
		n = n / 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	size_t	number_length;
	char	*converted_array;

	number_length = ft_number_length(n);
	converted_array = (char *)malloc(number_length + 1);
	if (!converted_array)
		return (NULL);
	
}