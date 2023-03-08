/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 09:00:19 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/07 13:04:02 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	res;

	res = 0;
	i = 0;
	while (src[res])
		res++;
	if (size < 1)
		return (res);
	else
	{
		while ((src[i] != '\0') && (i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (res);
}

/*
int	main(void)
{
	char	src[] = "World!1234562342342";
	char	dest[] = "hello ";

	printf("%u | %s\n", ft_strlcpy(dest, src, 13), dest);
}
*/