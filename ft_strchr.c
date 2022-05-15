/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:02:21 by arporto-          #+#    #+#             */
/*   Updated: 2022/05/14 02:47:52 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while ((s[count] != '\0') && ((char)c != s[count]))
		count++;
	if (s[count] == (char)c)
		return ((char *)s + count);
	else
		return (0);
}
