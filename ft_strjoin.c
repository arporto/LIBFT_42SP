/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 01:19:26 by arporto-          #+#    #+#             */
/*   Updated: 2022/05/14 02:48:05 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	index;

	if (s1 && s2)
	{
		new_string = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
		index = 0;
		if (new_string)
		{
			while (*s1 != '\0')
				new_string[index++] = *s1++;
			while (*s2 != '\0')
				new_string[index++] = *s2++;
			new_string[index] = '\0';
			return (new_string);
		}
	}
	return (NULL);
}
