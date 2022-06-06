/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:53:24 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/06 16:07:27 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;

	if (!dst || !src)
		return (0);
	dstlen = 0;
	while (dst[dstlen] && dstlen < size)
		dstlen++;
	srclen = ft_strlen(src);
	if (dstlen == size)
		return (size + srclen);
	if (srclen < size - dstlen)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else
		ft_memcpy(dst + dstlen, src, size - dstlen - 1);
	dst[size - 1] = '\0';
	return (dstlen + srclen);
}
