/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lworden <lworden@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:42:15 by lworden           #+#    #+#             */
/*   Updated: 2023/12/15 16:28:16 by lworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	f(unsigned int a, char *b)
{
	if (*b == 'l')
		*b = *b + a;
}

int	main()
{
	char	str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	void	(*ptr)(unsigned int, char*);

	ptr = &f;
	ft_striteri(str, ptr); 
	printf("%s\n", str);
} */