/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:51:59 by arporto-          #+#    #+#             */
/*   Updated: 2022/05/14 02:48:59 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	DESCRIPTION
 *	scans the initial n bytes of the memory
 *	area pointed to by s for the first instance of c.  Both c and the
 *	bytes of the memory area pointed to by s are interpreted as
 *	unsigned char. */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		if (((unsigned char *)s)[count] == (unsigned char)c)
			return ((void *)s + count);
		else
			count++;
	}
	return (NULL);
}
