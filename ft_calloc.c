/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:51:54 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/07 22:42:24 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allocated_mem;
	size_t	total;

	total = size * nmemb;
	if (size > __SIZE_MAX__ / nmemb)
		return (NULL);
	allocated_mem = (void *) malloc(total);
	if (allocated_mem == NULL)
		return (NULL);
	ft_bzero(allocated_mem, total);
	return (allocated_mem);
}
