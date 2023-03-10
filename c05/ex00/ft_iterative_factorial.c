/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 08:08:06 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/09 09:13:47 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;
	
	i = nb - 1;
	result = 1;
	if (nb > 0)
	{
		while (i >= 0)
		{
			result *= (nb - i);
			i--;
		}
		return (result);
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(8));
	return (0);
}