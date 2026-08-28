/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 14:01:35 by root              #+#    #+#             */
/*   Updated: 2026/08/28 14:17:35 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	if (nb == 1)
		return (1);
	if (nb < 1)
		return (0);
	n = 1;
	while ((nb / 2) >= n)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(-36));
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(36));
}*/