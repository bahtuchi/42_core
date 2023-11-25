/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommehdiz <ommehdiz@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:05:38 by omedbahtuch       #+#    #+#             */
/*   Updated: 2023/11/25 14:28:27 by ommehdiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s);
		i++;
		
		if(c == '\0')
		{
			return (s);
		}
	}
	
	if (s[i] != c)
		return (NULL);
	return (0);
}



int main(void)
{
	const char s[5] = "Haal";
	int c = 71;
	
	printf("%s\n",ft_strchr(s,c));
	printf("%s", strchr(s,c));
	
	return 0;
	
}