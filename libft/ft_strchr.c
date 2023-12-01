/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommehdiz <ommehdiz@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:05:38 by omedbahtuch       #+#    #+#             */
/*   Updated: 2023/12/01 12:50:36 by ommehdiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char) c;
	while (*s != '\0')
	{
		if (*s == uc)
			return ((char *) s);
		s++;
	}
	if (uc == '\0')
	{
		return ((char *) s);
	}
	return (0);
}

/*
int main(void)
{
	const char s[5] = "Haal";
	int c = 71;
	
	printf("%s\n",ft_strchr(s,c));
	printf("%s", strchr(s,c));
	
	return 0;
	
}*/