/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:16:07 by kaizhang          #+#    #+#             */
/*   Updated: 2022/03/22 20:48:32 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dst && !src)
	{
		return (dst);
	}
	d = dst;
	s = src;
	while (n)
	{
		*d = *s;
		s++;
		d++;
		n--;
	}
	return (dst);
}
/*
int	main(void)
{
	const char	s[50] = "hi kai!";
	char	d[50];

		strcpy(d, "I am kai");
		printf("before memcpy d was : %s\n", d);
		memcpy (d, s, strlen(s)+1);
		printf("after memcpy d is : %s\n", d);
		return(0);
}
*/	
