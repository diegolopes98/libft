/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:08:48 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/06 17:36:04 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	b = 0;
	if (little[0] == '\0')
		return ((char *)&big[b]);
	while (big[b] != '\0')
	{
		l = 0;
		while (
			big[b + l] == little[l] 
			&& little[l] != '\0' 
			&& b + l < len
		)
			l++;
		if (little[l] == '\0')
			return ((char *)&big[b]);
		b++;
	}
	return (0);
}
