/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 08:02:29 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/07 09:12:03 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= (65) && str[i] <= (90))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("HGJKHGP"));
	printf("%d\n", ft_str_is_uppercase("qwywexv"));
	printf("%d\n", ft_str_is_uppercase("HGDEoj99"));
	printf("%d\n", ft_str_is_uppercase(" "));
}
*/