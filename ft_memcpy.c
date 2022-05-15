/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:27:17 by arporto-          #+#    #+#             */
/*   Updated: 2022/05/14 02:47:24 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	DESCRIPTION
 *	The memcpy() function copies n bytes from memory area src to
 *	memory area dest. Returns a pointer to dest. */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;

	count = 0;
	if (dest == 0 && src == 0)
		return (NULL);
	while (count < n)
	{
		((unsigned char *) dest)[count] = ((unsigned char *) src)[count];
		count++;
	}
	return (dest);
}
