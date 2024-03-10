/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lworden <lworden@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:36:08 by lworden           #+#    #+#             */
/*   Updated: 2023/12/15 16:20:47 by lworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	if (size < 1)
		return (len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/* int	main()
{
	char	dest[10];
	memset(dest, 'a', 10);
	
	const char	*source = "coucou";

	char	dest2[10];
	memset(dest2, 'a', 10);
	
	const char	*source2 = "coucou";
// 	printf("compare: %d\n", strcmp(dest, source));

//	ft_strlcpy(dest, source, 5);

//	printf("%s\n", dest);

//	size_t test = -1;
//	printf("test: %lu\n", test);

	int g;
	g = ft_strlcpy(dest2, source2, -1);
	printf("len2: %d dest2: %s\n", g, dest2);

	int t;
	t = strlcpy(dest, source, -1);
	printf("len: %d dest: %s\n", t, dest);
} */