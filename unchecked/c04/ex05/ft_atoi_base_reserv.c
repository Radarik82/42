/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:43:31 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/08 20:41:08 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi_base(char *str, char *base);

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

int	ft_ctoi(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	return (-1);
}

int	ft_power(int num, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power--)
		result *= num;
	return (result);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] >= '0' && base[i] <= '9')
			|| (base[i] >= 'a' && base [i] <= 'z')
				|| (base[i] >= 'A' && base[i] <= 'Z')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] >= base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	number;
	int	i;
	int	power;
	int	base_size;

	sign = 1;
	number = 0;
	i = 0;
	power = 0;
	if ((base_size = ft_check_base(base)))
	{
		if (*str == '-')
		{
			i++;
			sign = -1;
		}
		while (str[i])
			i++;
		while (--i >= 0)
		{
			if (ft_ctoi(str[i]) != -1) && (ft_ctoi(str[i]) < base_size)
				number += ft_ctoi(str[i]) * ft_power(base_size, power++);
		}
		return (number * sign);
	}
	return (0);
}
int     main(void)
{
	char	*base;
	char	*str;

	str = "12fdb3";
	base = "0123456789ABCDEF";
    ft_putnbr(ft_atoi_base(str, base));
    return (0);							
}