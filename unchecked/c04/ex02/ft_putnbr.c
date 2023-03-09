/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:33:04 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/08 20:38:33 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	long	lnbr;
	char	c[10];
	short	i;

	lnbr = nb;
	i = 0;
	if (0 == nb)
	{
		write(1, "0", 1);
		return ;
	}
	if (lnbr < 0)
	{
		lnbr *= -1;
		write(1, "-", 1);
	}
	while (lnbr)
	{
		c[i++] = (lnbr % 10) + 48;
		lnbr /= 10;
	}
	while (i >= 0)
		write(1, &c[--i], 1);
}

int	main(void)
{
	ft_putnbr(42);
	write (1, "\n", 1);
	ft_putnbr(-42);
	write (1, "\n", 1);
	ft_putnbr(-2147483648);
	write (1, "\n", 1);
	ft_putnbr(2147483647);
	write (1, "\n", 1);
	ft_putnbr(0);
	write (1, "\n", 1);
}