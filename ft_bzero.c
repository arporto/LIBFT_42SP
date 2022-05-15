/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:06:51 by arporto-          #+#    #+#             */
/*   Updated: 2022/05/14 02:46:45 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	DESCRIPTION
 *	The bzero() function erases the data in the n bytes of the memory
 *  starting at the location pointed to by s, by writing zeros (bytes
 *  containing '\0') to that area.
 *	Return: None */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			count;

	p = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		p[count] = 0;
		count++;
	}
}
