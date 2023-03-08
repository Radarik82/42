/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:27:04 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/07 09:11:07 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= (65) && str[i] <= (90))
			|| (str[i] >= (97) && str[i] <= (122)))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d\n", ft_str_is_alpha("abcdefghi"));
	printf("%d\n", ft_str_is_alpha("sjhg23gfs"));
	printf("%d\n", ft_str_is_alpha("_124sdkfj"));
	printf("%d\n", ft_str_is_alpha(" "));
}
*/