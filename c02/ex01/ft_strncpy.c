/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:19:17 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/07 13:48:28 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n && *src)
	{
		*(dest + i++) = *src++;
		--n;
	}
	while (n--)
		*(dest + i++) = '\0';
	return (dest);
}


int	main(void)
{
	char	src[] = "Test---";
	char	dest[] = "_____place";
	char	dest1[] = "_____place";
	char	dest2[] = "_____place";
	char	dest3[] = "_____place";
	char	dest4[] = "____";
	char	dest5[] = "____";

	printf("%s\n", ft_strncpy(dest, src, 3));
	printf("%s\n", strncpy(dest1, src, 3));
	printf("%s\n", ft_strncpy(dest2, src, 5));
	printf("%s\n", strncpy(dest3, src, 5));
	printf("%s\n", ft_strncpy(dest4, src, 4));
	printf("%s\n", strncpy(dest5, src, 4));
}
