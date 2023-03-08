/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:51:58 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/04 15:44:10 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	*str = "FORTY TWO";
	ft_putstr(str);
	write (1, "\n", 1);
}
