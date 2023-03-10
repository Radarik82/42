/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:43:30 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/09 10:23:14 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while ((i * i) < nb)
		i++;
	if (i * i == nb)
		return (i);
	return(0);	
}

int	main(void)
{
	printf("+/- %d\n", ft_sqrt(256));
	return (0);
}