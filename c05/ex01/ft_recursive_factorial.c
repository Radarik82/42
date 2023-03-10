/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 08:24:37 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/09 08:32:41 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	result;
	
	i = nb - 1;
	result = 1;
	if (nb > 0)
	{
		result *= (nb * ft_recursive_factorial(nb - 1));
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (result);
}

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(8));
	return (0);
}