/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:04:46 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/07 20:52:51 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr_str_size(long int n)
{
	if (n < 0)
		return (1 + ft_nbr_str_size(n * -1));
	if ((n / 10) == 0)
		return (1);
	return (1 + ft_nbr_str_size(n / 10));
}

static void	ft_rec_itoa(long int n, char *nstr, int size)
{
	if (n < 0)
	{
		nstr[0] = '-';
		n *= -1;
	}
	if (n >= 10)
		ft_rec_itoa((n / 10), nstr, (size - 1));
	nstr[size] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	char	*nstr;
	int		size;

	size = ft_nbr_str_size(n);
	nstr = (char *)malloc((size + 1) * sizeof(char));
	if (!nstr)
		return (NULL);
	nstr[size--] = '\0';
	ft_rec_itoa(n, nstr, size);
	return (nstr);
}
