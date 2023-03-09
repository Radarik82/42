/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:09:36 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/07 13:58:39 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(*(str + i))
		write(1, &(*(str + i++)), 1);
}

int	main(void)
{	
	char	*c;

	c = "hersjghskdfjghlskjdfhglksjdhfgkjllo\n";
	ft_putstr(c);
	return (0);
}