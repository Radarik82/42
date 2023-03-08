/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:51:04 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/03 18:54:38 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	i;
	int	swap;

	i = 0;
	swap = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				swap = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
}

int main(void)
{
	int	tab[10];
	int	i;
	
	i = 10;
	while (i > 0)
	{
		tab[10 - i] = i - 1;
		i--;
	};
	i = 0;
	while (i < 10)
	{
		printf("%d : %d\n", i , tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d : %d\n", i, tab[i]);
		i++;
	}	
}
