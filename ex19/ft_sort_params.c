/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 12:01:16 by root              #+#    #+#             */
/*   Updated: 2026/08/29 13:21:23 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	j = 1;
	while (j != argc - 1)
	{
		k = j + 1;
		while (k != argc)
		{
			i = 0;
			while (argv[j][i] == argv[k][i] && (argv[j][i] || argv[k][i]))
				i++;
			if (argv[j][i] > argv[k][i])
				ft_swap(&argv[j], &argv[k]);
			k++;
		}
		ft_putstr(argv[j]);
		ft_putchar('\n');
		j++;
	}
	ft_putstr(argv[argc - 1]);
}
