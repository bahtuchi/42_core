/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omedbahtuchi <omedbahtuchi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:20:40 by omedbahtuch       #+#    #+#             */
/*   Updated: 2023/11/04 16:22:04 by omedbahtuch      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int ft_isalnum (int c)
{
    return (ft_isalpha(c) || ft_isdigit(c))
}