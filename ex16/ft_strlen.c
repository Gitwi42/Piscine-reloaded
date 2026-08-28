/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 14:39:37 by root              #+#    #+#             */
/*   Updated: 2026/08/28 14:44:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*int	main(void)
{
	printf("%d\n", ft_strlen("salut"));
	printf("%d\n", ft_strlen("ABC"));
	printf("%d\n", ft_strlen("Comment tu vas ?"));
	printf("%d\n", ft_strlen(""));
	return (0);
}*/
