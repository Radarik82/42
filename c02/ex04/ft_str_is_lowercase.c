/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 08:01:16 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/07 09:11:46 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= (97) && str[i] <= (122))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("dsfhs"));
	printf("%d\n", ft_str_is_lowercase("GHJGJHsasd"));
	printf("%d\n", ft_str_is_lowercase("sdfIURR"));
	printf("%d\n", ft_str_is_lowercase(" "));
}
*/