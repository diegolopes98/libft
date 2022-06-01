/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 06:30:48 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/01 07:25:39 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = s1;
	ptr2 = s2;
	while (
		n
		&& *(unsigned char*)(ptr1) == *(unsigned char*)(ptr2)
	)
	{
		n--;
		ptr1++;
		ptr2++;
	}
	return (*(unsigned char *)(ptr1) - *(unsigned char *)(ptr2));
}
