/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurz <akurz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 09:23:22 by akurz             #+#    #+#             */
/*   Updated: 2021/06/29 11:17:35 by akurz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	x;
	size_t	i;

	x = 0;
	i = start;
	if (s == NULL)
		return (NULL);
	substring = (char *)malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substring[0] = 0;
		return (substring);
	}
	while (x < len && s[x] != '\0')
	{
		substring[x] = s[i];
		i++;
		x++;
	}
	substring[x] = '\0';
	return (substring);
}
