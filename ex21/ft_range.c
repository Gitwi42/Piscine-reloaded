/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 13:38:13 by root              #+#    #+#             */
/*   Updated: 2026/08/29 14:03:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*total;
	int	count;
	int	i;

	if (min >= max)
	{
		total = NULL;
		return (total);
	}
	count = max - min;
	total = malloc (sizeof (int) * count);
	if (!total)
		return (0);
	i = 0;
	while (i != count)
	{
		total[i] = min;
		min++;
		i++;
	}
	return (total);
}
