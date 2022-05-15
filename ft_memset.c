/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:52:09 by arporto-          #+#    #+#             */
/*   Updated: 2022/05/14 02:47:31 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	DESCRIPTION
 *	The memset() function fills the first n bytes of the memory area
 *	pointed to by s with the constant byte c. */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*l;

	l = (unsigned char *) s;
	count = 0;
	while (count < n)
	{
		l[count] = (unsigned char) c;
		count++;
	}
	return (s);
}
