/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:43:31 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/08 21:24:23 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	num_base(char str, char *base)
{
	int	num;

	num = 0;
	while (base[num] != '\0')
	{
		if (str == base[num])
			return (num);
		num++;
	}
	return (-1);
}

int	ft_isspace(char *str, int *ptr_i)
{
	int	j;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	j = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			j *= -1;
		i++;
	}
	*ptr_i = i;
	return (j);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		num1;
	int		num2;
	int		begin_len;

	num1 = 0;
	i = 0;
	begin_len = check_base(base);
	if (begin_len >= 2)
	{
		sign = ft_isspace(str, &i);
		num2 = num_base(str[i], base);
		while (num2 != -1)
		{
			num1 = (num1 * begin_len) + num2;
			i++;
			num2 = num_base(str[i], base);
		}
		return (num1 *= sign);
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_atoi_base("	--+--++--164742add6654", "poneyvif"));
	printf("%d\n", ft_atoi_base("	 -++++--10011010", "01"));
	printf("%d\n", ft_atoi_base(" 	+--++42ghj", "0123456789abcdef"));
}
