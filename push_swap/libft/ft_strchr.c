/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:59:09 by kaizhang          #+#    #+#             */
/*   Updated: 2022/03/22 19:40:18 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (0);
}
/*
int	main()
{
	char s[100] = "hello @@@@kai";
	char *d;

	d = ft_strchr(s, '@');
	printf("%s\n", d);

	d[0] = '*';
	printf("%s\n", s);
	return (0);
}
*/
