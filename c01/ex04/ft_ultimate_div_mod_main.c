/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 08:42:25 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/03 09:37:54 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main(void)
{
	int	ap;
	int	bp;
	int	*a;
	int	*b;
	
	a = &ap;
	b = &bp;
	ap = 42;
	bp = 21;
	ft_ultimate_div_mod(a, b);
	printf("%d and %d\n", ap, bp);
	return (0);
}
