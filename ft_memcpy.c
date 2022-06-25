/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:26:20 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/25 21:26:23 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ucdest;
	unsigned char	*ucsrc;
	size_t			i;

	i = 0;
	ucdest = (unsigned char *)dest;
	ucsrc = (unsigned char *)src;
	while (i < n)
	{
		ucdest[i] = ucsrc[i];
		i++;
	}
	return (dest);
}
