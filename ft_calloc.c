/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:51:54 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/02 20:05:29 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allocated_mem;

	allocated_mem = (void *) malloc(nmemb * size);
	if (allocated_mem == 0)
		return (0);
	ft_bzero(allocated_mem, nmemb * size);
	return (allocated_mem);
}
