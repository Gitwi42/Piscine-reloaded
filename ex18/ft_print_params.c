/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 01:06:06 by root              #+#    #+#             */
/*   Updated: 2026/08/29 01:22:21 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

int	main(int argc, char **argv)
{
	int	i;
	int	p;

	p = 1;
	while (p <= argc - 1)
	{
		i = 0;
		while (argv[p][i])
			ft_putchar(argv[p][i++]);
		p++;
		ft_putchar('\n');
	}
	return	(0);
}
