/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:33:32 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/01 21:47:58 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ldest;
	char		*cdest;
	const char	*lsrc;
	const char	*csrc;

	cdest = dest;
	csrc = src;
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		ldest = dest + (n - 1);
		lsrc = src + (n - 1);
		while (n--)
			*ldest-- = *lsrc--;
	}
	return (dest);
}
