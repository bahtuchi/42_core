/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omedbahtuchi <omedbahtuchi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 07:46:43 by omedbahtuch       #+#    #+#             */
/*   Updated: 2023/11/11 07:59:28 by omedbahtuch      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

void    ft_bzero(void *s, size_t n)
{
    char *ptr_s;
    
    *ptr_s = (char *) s;
    if (n == 0)
        return ;
    else
    {
        while(n > 0)
        {
            *ptr_s = 0;
            n--;
            ptr_s++;
        }
    }        
}