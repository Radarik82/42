/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:04:04 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/09 09:23:00 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if(power > 1)
		return (nb * (ft_recursive_power(nb, (power - 1))));
	else if (power == 0)
		return(1);
	else if (power < 0)
		return (0);
	return (result);
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(8, 4));
	return (0);
}