/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 00:54:06 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/01 06:21:35 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (n && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
		n--;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
