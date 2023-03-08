/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 07:19:00 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/03 07:49:34 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	n1;
	int	n2;
	int	*a;
	int	*b;

	a = &n1;
	b = &n2;
	n1 = 42;
	n2 = 21;
	printf("before: n1 %d and n2 %d\n", n1, n2);
	ft_swap(a, b);
	printf("after: n1 %d and n2 %d\n", n1, n2);
	return (0);
}
