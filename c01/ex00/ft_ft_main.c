/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 06:00:07 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/03 06:22:09 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int	*nbr)
{	
	*nbr = 42;
}

int	main()
{
	int a;
	int *nbr;

	a = 21;
	nbr = &a;
	printf("Before - %d\n", a);
	ft_ft(nbr);
	printf("After - %d\n", a);
}