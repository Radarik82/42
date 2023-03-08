/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:54:27 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/03 20:31:58 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tab2;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		tab2 = tab[i];
		tab[i] = *(tab + (size -1 -i));
		*(tab + (size -1 -i)) = tab2;
		i++;
	}
}

int main(void)
{
	int	tab[8];
	int	i;
	
	i = 0;
	while (i < 8)
	{
		tab[i] = i + 1;
		i++;
	};
	i = 0;
	while (i < 8)
	{
		printf("%d : %d\n", i + 1, tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, 8);
	i = 0;
	while (i < 8)
	{
		printf("%d : %d\n", i + 1, tab[i]);
		i++;
	}	
}
