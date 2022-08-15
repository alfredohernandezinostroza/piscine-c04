/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:40:22 by vgoncalv          #+#    #+#             */
/*   Updated: 2022/08/15 19:12:17 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void	ft_putnbr_base(int nbr, char *base);
int 	pwr(int base, int exponent);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	// base binaria
	printf("Bases binarias, n = 47. \"01\" e \"\\/\"\n");
	ft_putnbr_base(47, "01");
	ft_putchar('\n');
	printf("Esperado: 101111\n");
	ft_putnbr_base(47, "\\/");
	ft_putchar('\n');
	printf("Esperado: /\\////\n");
	// base 5
	printf("Bases 5, n = 36. \"01345\" e \"sd2ek\"\n");
	ft_putnbr_base(36, "01345");
	ft_putchar('\n');
	printf("Esperado: 131\n");
	ft_putnbr_base(36, "sd2ek");
	ft_putchar('\n');
	printf("Esperado: d2d\n");
	// base 10
	printf("Bases 10, n = %d. \"0123456789\" e \",.;\\][{}@#\"\n", INT_MIN);
	ft_putnbr_base(INT_MIN, "0123456789");
	ft_putchar('\n');
	printf("Esperado: -2147483648\n");
	ft_putnbr_base(INT_MIN, ",.;\\][{}@#");
	ft_putchar('\n');
	printf("Esperado: -;.]}]@\\{]@\n");
	// base 10
	printf("Bases 10, n = %d. \"0123456789\" e \",.;\\][{}@#\"\n", 3432432);
	ft_putnbr_base(3432432, "0123456789");
	ft_putchar('\n');
	printf("Esperado: 3432432\n");
	ft_putnbr_base(3432432, ",.;\\][{}@#");
	ft_putchar('\n');
	printf("Esperado: \\]\\;]\\;\n");
	// base 10
	printf("Bases 10, n = %d. \"0123456789\" e \",.;\\][{}@#\"\n", -3432432);
	ft_putnbr_base(-3432432, "0123456789");
	ft_putchar('\n');
	printf("Esperado: -3432432\n");
	ft_putnbr_base(-3432432, ",.;\\][{}@#");
	ft_putchar('\n');
	printf("Esperado: -\\]\\;]\\;\n");
	// base 10
	printf("Bases 10, n = %d. \"0123456789\" e \",.;\\][{}@#\"\n", INT_MAX);
	ft_putnbr_base(INT_MAX, "0123456789");
	ft_putchar('\n');
	printf("Esperado: %d\n", INT_MAX);
	ft_putnbr_base(INT_MAX, ",.;\\][{}@#");
	ft_putchar('\n');
	printf("Esperado: ;.]}]@\\{]}\n");
	// base 16
	printf("Bases 16, n = -65040. \"0123456789ABCDEF\" e \"jdlskmnMKZxVuzfa\"\n");
	ft_putnbr_base(-65040, "0123456789ABCDEF");
	ft_putchar('\n');
	printf("Esperado: -FE10\n");
	ft_putnbr_base(-65040, "jdlskmnMKZxVuzfa");
	ft_putchar('\n');
	printf("Esperado: -afdj\n");
	// base 16
	printf("Bases 16, n = 65040. \"0123456789ABCDEF\" e \"jdlskmnMKZxVuzfa\"\n");
	ft_putnbr_base(65040, "0123456789ABCDEF");
	ft_putchar('\n');
	printf("Esperado: FE10\n");
	ft_putnbr_base(65040, "jdlskmnMKZxVuzfa");
	ft_putchar('\n');
	printf("Esperado: afdj\n");
	// base 0 e base 1, nao pode aparecer nada
	printf("Bases 0 e 1, nao deve aparecer nada, n = 256.\n");
	ft_putnbr_base(-29092, "0");
	ft_putnbr_base(-29092, "");
	return (0);
}