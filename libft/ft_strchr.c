/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreymond <mreymond@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:58:16 by mreymond          #+#    #+#             */
/*   Updated: 2021/10/20 12:02:04 by mreymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 

char	*ft_strchr(const char *s, int c)
{
	char	lettre;
	char	*str;

	lettre = c;
	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == lettre)
			return (str);
		str++;
	}
	if (*str == lettre)
		return (str);
	return (NULL);
}
