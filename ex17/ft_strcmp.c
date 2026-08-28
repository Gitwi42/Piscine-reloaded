/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 00:45:40 by root              #+#    #+#             */
/*   Updated: 2026/08/29 01:04:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	printf("%d\n", ft_strcmp("abc", "abc"));
	printf("%d\n", ft_strcmp("abcd", "abc"));
	printf("%d\n", ft_strcmp("abc", "abcd"));
}*/
