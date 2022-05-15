/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:03:52 by arporto-          #+#    #+#             */
/*   Updated: 2022/05/14 02:46:49 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	DESCRIPTION
 *	The calloc() function shall allocate unused space for an array of
 *	nelem elements each of whose size in bytes is elsize.  The space
 *	shall be initialized to all bits 0. */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	if (count >= 18446744073709551615UL || size >= 18446744073709551615UL
		|| count * size >= 18446744073709551615UL)
		return (NULL);
	result = malloc(count * size);
	if (!result)
		return (0);
	ft_bzero(result, (count * size));
	return (result);
}
