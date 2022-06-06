/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:26:20 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/06 16:07:27 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*cdest;
	const char	*csrc;

	if (!dest || !src)
		return (0);
	cdest = dest;
	csrc = src;
	while (n)
	{
		*cdest = *csrc;
		cdest++;
		csrc++;
		n--;
	}
	return (dest);
}
