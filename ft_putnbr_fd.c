/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 23:08:02 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/07 23:11:43 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_abs_nbr(int nb)
{
	int	abs_nb;

	abs_nb = nb;
	if (nb < 0)
	{
		abs_nb = nb * -1;
	}
	return (abs_nb);
}

void ft_putnbr_fd(int n, int fd)
{
	int	nb_to_print;
	int	abs_nb_to_print;

	nb_to_print = n % 10;
	abs_nb_to_print = ft_get_abs_nbr(nb_to_print);
	if (n / 10 != 0)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	if (n < 0 && n / 10 == 0)
	{
		ft_putchar_fd('-', fd);
	}
	ft_putchar_fd(abs_nb_to_print + 48, fd);
}
