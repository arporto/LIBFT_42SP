/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:38:49 by arporto-          #+#    #+#             */
/*   Updated: 2022/05/14 02:47:13 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	DESCRIPTION
 *	coverts the integer n into a character string. 
 *	recursion: similar idea to putnbr.
 *	return: String pointer. */

#include "libft.h"

static void	conv_str(int c, char *str, long int i)
{
	long int	n;

	n = c;
	if (c < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n >= 10)
		conv_str((n / 10), str, (i - 1));
	str[i] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	i;
	long int	len_int;

	i = n;
	len_int = 0;
	if (i <= 0)
		len_int++;
	while (i)
	{
		i = (i / 10);
		len_int++;
	}
	str = malloc(sizeof(char) * (len_int + 1));
	if (!str)
		return (NULL);
	str[len_int] = '\0';
	conv_str(n, str, (len_int - 1));
	return (str);
}
