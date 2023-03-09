/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:45:47 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/08 14:32:50 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_repeat(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (*(str + i))
	{
		j = i + 1;
		while (*(str + j))
		{	
			if (*(str + i) == *(str + j))
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	number;
	
	sign = 0;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str =='-')
	{
		if (*str == '-')
			sign++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		++str;
	}
	if (!(sign % 2))
		return (number);
	return (-number);
}

void	print_nbr(int nbr, int base_size, char *base)
{
	long	lnbr;
	
	lnbr = nbr;
	if (lnbr < 0)
	{
		lnbr = -lnbr;
		ft_putchar('-');
	}
	if (lnbr >= base_size)
		print_nbr(lnbr / base_size, base_size, base);
	ft_putchar(base[lnbr % base_size]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;
	
	base_size = 0;
	while (base[base_size])
	{
		if (base[base_size] == '+' || base[base_size] == '-')
			break;
		base_size++;
	}
	if (base_size < 2)
		return;
	if (ft_repeat(base))
		return; 
	print_nbr(nbr, base_size, base);
}

int	main(/*int argc, char **argv*/void)
{
	int		n;
	char	*base_content;
	
	n = 42;
	base_content = "poneyvif";
//	n = ft_atoi(argv[1]);
//	base_content = argv[2];
	ft_putnbr_base(n, base_content);
}