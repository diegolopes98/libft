/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 23:16:47 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/06 16:11:30 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = s;
	if (!s)
		return (NULL);
	while (n)
	{
		if (*ptr == (unsigned char) c)
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (0);
}
