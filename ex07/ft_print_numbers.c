/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 11:28:52 by root              #+#    #+#             */
/*   Updated: 2026/08/28 11:42:34 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_numbers(void)
{
	char numb;

	numb = '0';
	while (numb <= '9')
		ft_putchar(numb++);
}
/*int main(void)
{
	ft_print_numbers();
	return 0;
}*/
