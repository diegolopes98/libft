/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:51:54 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/02 19:51:55 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloced_mem;

	alloced_mem = (void *) malloc(nmemb * size);
	if (alloced_mem == 0)
		return (0);
	ft_bzero(alloced_mem, nmemb * size);
	return (alloced_mem);
}
