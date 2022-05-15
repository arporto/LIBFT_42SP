/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 23:42:08 by arporto-          #+#    #+#             */
/*   Updated: 2022/05/14 02:48:21 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dup;
	unsigned int	index;

	dup = ft_strdup(s);
	index = 0;
	if (!dup)
		return (NULL);
	while (dup[index])
	{
		dup[index] = f(index, dup[index]);
		index++;
	}
	return (dup);
}
