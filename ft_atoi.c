/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:25:41 by arporto-          #+#    #+#             */
/*   Updated: 2022/05/14 02:46:40 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  DESCRIPTION
*	The atoi() function converts the initial portion of the string
*	pointed to by nptr to int.
*	Return : The converted value or 0 on error. */

#include "libft.h"

static	int	ft_checkspace(char c)
{
	while (c == ' ' || (c >= '\t' && c <= '\r'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	count;
	int		signal;
	int		dest;

	count = 0;
	signal = 1;
	dest = 0;
	while (ft_checkspace(str[count]))
		count++;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			signal = -1;
		count++;
	}
	while (ft_isdigit(str[count]))
	{
		dest = (dest * 10) + (str[count] - '0');
		count++;
	}
	return ((int)(dest * signal));
}
