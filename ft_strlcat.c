/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lworden <lworden@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:01:07 by lworden           #+#    #+#             */
/*   Updated: 2023/12/15 16:20:49 by lworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d_len;
	size_t	s_len; 

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	j = 0;
	i = d_len;
	if (size <= d_len)
		return (s_len + size);
	while (src[j] && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (s_len + d_len);
}

/* int     main()
{
	char dest[30]; 
	memset(dest, 0, 30);
	char d[] = "b";
	char s[] = "AAAAAAAAA";
	char d1[] = "b";
	char s1[] = "AAAAAAAAA";
	printf("ft_len: %lu\n", ft_strlcat(d, s, 6));
	printf("len: %lu\n", strlcat(d1, s1, 6));
	printf("ft_dest: %s\n", d);
	printf("dest: %s\n", d1);
} */