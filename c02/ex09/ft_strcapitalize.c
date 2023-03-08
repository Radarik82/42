/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 08:37:05 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/07 09:13:13 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 1;
	while (str[i])
	{
		c = str[i];
		if (j == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (j == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	r[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
	printf("%s\n", ft_strcapitalize(r));
	return (0);
}
*/