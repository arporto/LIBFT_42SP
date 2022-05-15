/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 00:31:31 by arporto-          #+#    #+#             */
/*   Updated: 2022/05/14 03:23:20 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	little_size;

	count = 0;
	little_size = ft_strlen(little);
	if (!little_size)
		return ((char *) big);
	while (big[count] && (count + little_size <= len) && (len != 0))
	{
		if (big[count] == little[0])
		{
			if (!ft_strncmp(&big[count], little, little_size))
				return ((char *)&big[count]);
		}
		count++;
	}
	return (0);
}
