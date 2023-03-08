/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 07:53:17 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/03 08:14:25 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int	a = 42;
	int	b = 21;
	int	resu;
	int	rest;
	int	*div;
	int	*mod;

	div = &resu;
	mod = &rest;
	ft_div_mod(a, b, div, mod);
	printf("a = %d, b = %d, resu = %d, rest = %d\n", a, b, resu, rest);
	return (0);
}
