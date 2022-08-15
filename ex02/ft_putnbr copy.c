/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:37:43 by aantonio          #+#    #+#             */
/*   Updated: 2022/08/15 14:46:27 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		pwr;
	int		copy;
	char	digit;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-1 * nb);
		return ;
	}
	copy = nb;
	pwr = 1;
	while (copy != 0)
	{
		copy /= 10;
		pwr *= 10;
	}
	pwr /= 10;
	while (pwr != 0)
	{
		digit = ((nb / pwr) % 10) + '0';
		pwr = pwr / 10;
		write(1, &digit, 1);
	}
}
