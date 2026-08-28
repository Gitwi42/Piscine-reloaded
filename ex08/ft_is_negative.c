/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 11:48:20 by root              #+#    #+#             */
/*   Updated: 2026/08/28 12:01:32 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}
/*int main(void)
{
	ft_is_negative(-7);
	ft_is_negative(-3);
	ft_is_negative(0);
	ft_is_negative(12);
	ft_is_negative(-27);
	return 0;
}*/