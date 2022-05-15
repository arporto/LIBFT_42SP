/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:31:48 by arporto-          #+#    #+#             */
/*   Updated: 2022/05/14 02:47:21 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	DESCRIPTION
 *	compares the first n bytes (each
 *	interpreted as unsigned char) of the memory areas s1 and s2.
 *	returns an integer less than, equal to, or
 *	greater than zero if the first n bytes of s1 is found,
 *	respectively, to be less than, to match, or be greater than the
 *	first n bytes of s2. */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			count;
	unsigned char	*first;
	unsigned char	*second;

	first = (unsigned char *) s1;
	second = (unsigned char *) s2;
	count = 0;
	while (count < n)
	{
		if (*first != *second)
			return (*first - *second);
		count++;
		first++;
		second++;
	}
	return (0);
}
