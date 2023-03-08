/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:56:49 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/06 21:24:41 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	str1[] = "12345678";
	char	str2[] = "12345677";
	int		t;

	t = 5;
	if (ft_strncmp(str1, str2, t) == 0)
	{	
		printf("first %d symbols are equal\n", t);
	}
	else
	{
		printf("first %d symbols are different\n", t);
	}
	return (0);
}
*/