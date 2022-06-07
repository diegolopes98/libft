/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:03:27 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/07 22:45:18 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	dup = ft_calloc(slen + 1, sizeof(char));
	if (!dup)
		return (0);
	dup = ft_memcpy(dup, s, slen + 1);
	return (dup);
}
