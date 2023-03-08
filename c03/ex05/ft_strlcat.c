/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariazano <ariazano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:34:33 by ariazano          #+#    #+#             */
/*   Updated: 2023/03/08 07:27:40 by ariazano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlen(char *str)
{
	unsigned int	q;

	q = 0;
	while (str[q] != '\0')
		q++;
	return (q);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	size_dest;
	unsigned int	size_src;

	i = ft_strlen(dest);
	j = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size < 1)
		return (size_src + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < size_dest)
		return (size_src + size);
	else
		return (size_dest + size_src);
}

/*
int	main(void)
{
	char			src[] = {"12345AAAAA"};
	char			dest[18] = {"Hello "};
	unsigned int	r;
	
	r = ft_strlcat(dest, src, 208);
	printf("full line <<%s>> is - %u\n", dest, r);
	return (0);
}
*/