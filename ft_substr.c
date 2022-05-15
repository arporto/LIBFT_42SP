/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:55:51 by arporto-          #+#    #+#             */
/*   Updated: 2022/05/13 15:41:51 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	i;
	size_t	len_s;
	size_t	sub_len;
	char	*substr;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	sub_len = len_s - (size_t) start;
	if (start > len_s)
		return ((char *) ft_calloc(1, sizeof(char)));
	if (sub_len > len)
		substr = (char *) ft_calloc((len + 1), sizeof(char));
	else
		substr = (char *) ft_calloc((sub_len + 1), sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (s[start] && len--)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
