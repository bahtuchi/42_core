/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommehdiz <ommehdiz@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:21:30 by ommehdiz          #+#    #+#             */
/*   Updated: 2023/11/27 10:30:48 by ommehdiz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
