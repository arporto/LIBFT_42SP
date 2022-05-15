/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:16:58 by arporto-          #+#    #+#             */
/*   Updated: 2022/05/14 02:47:05 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	DESCRIPTION
 *	checks for a digit (0 through 9).
 *	The values returned are nonzero if the character c falls
 *	into the tested class, and a zero value if not. */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
