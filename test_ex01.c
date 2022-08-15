/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:46:06 by vgoncalv          #+#    #+#             */
/*   Updated: 2022/08/15 14:29:06 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char *str;

	str = "";
	ft_putstr(str);
	write(1, "\n", 1);
	str = "This is a test string.";
	ft_putstr(str);
	write(1, "\n", 1);
	str = "This is a gianormous test string, testing to see whatever happens in here....";
	ft_putstr(str);
	write(1, "\n", 1);
	return (0);
}