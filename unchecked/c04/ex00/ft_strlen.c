/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:05:50 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/09 06:53:13 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}


int	main(void)
{	
	printf("%d\n", ft_strlen("42"));
	return (0);
}

// use cc -W -Wall -Wextra -Werror ft_strlen.c -o test; ./test