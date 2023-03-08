/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:08:54 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/03 12:09:41 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tab2;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		tab2 = tab[i];
		tab[i] = *(tab + (size - 1 - i));
		*(tab + (size - 1 - i)) = tab2;
		i++;
	}
}
