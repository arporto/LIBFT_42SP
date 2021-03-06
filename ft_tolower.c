/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:57:05 by arporto-          #+#    #+#             */
/*   Updated: 2022/05/09 02:29:31 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		return (c);
	}
	else
		return (c);
}
