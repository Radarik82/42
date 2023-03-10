/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 08:38:17 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/09 09:11:16 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	if(power > 0)
	{
		while (power > 2)
		{
			nb *= nb;
			power--;
		}
		return(nb);
	}
	else if (power == 0 && nb == 0)
		return(1);
	else
		return (0);
	
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(8, 4));
	return (0);
}