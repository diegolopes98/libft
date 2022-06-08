/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:25:25 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/08 23:52:32 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (c > 127)
		c = c % 256;
	i = ft_strlen(s);
	while (i > 0 && s[i] != (char) c)
		i--;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
