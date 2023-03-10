/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:25:01 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/09 09:39:55 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return(result);
}

int	main(void)
{
	printf("%d\n", ft_fibonacci(18));
	return (0);
}