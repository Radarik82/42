/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:42:12 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/06 21:24:07 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char	str1[] = "12345678";
	char	str2[] = "12345677";

	if (ft_strcmp(str1, str2) == 0)
	{	
		write (1, "strings equal", 14);
		write (1, "\n", 1);
	}
	else
	{
		write (1, "strings diff", 13);
		write (1, "\n", 1);
	}
	return (0);
}
*/