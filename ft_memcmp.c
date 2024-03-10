/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lworden <lworden@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:46:58 by lworden           #+#    #+#             */
/*   Updated: 2023/12/15 16:09:46 by lworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_c;
	const unsigned char	*s2_c;

	s1_c = (const unsigned char *)s1;
	s2_c = (const unsigned char *)s2;
	i = 0;
	while (n--)
	{
		if (s1_c[i] != s2_c[i])
			return (s1_c[i] - s2_c[i]);
		i++;
	}
	return (0);
}

/* int	main()
{
	char	str1[2] = {0, 5};
	char	str2[2] = {-128, 0};

	const void	*ptr1;
	const void	*ptr2;

	ptr1 = (const void *)str1;
	ptr2 = (const void *)str2;

	//printf("%d\n", memcmp(str1, str2, 1));
	printf("%d\n", ft_memcmp(str1, str2, 1));
	// printf("%c\n", -128);
} */