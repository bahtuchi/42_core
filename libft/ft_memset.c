/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omedbahtuchi <omedbahtuchi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:01:30 by omedbahtuch       #+#    #+#             */
/*   Updated: 2023/11/11 08:03:25 by omedbahtuch      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void *ft_memset(void *b, int c, size_t len) {
    unsigned char *p = b;
    unsigned char uc = (unsigned char)c;

    while (len-- > 0) {
        *p++ = uc;
    }

    return s;
}