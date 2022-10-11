/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiciftci <yiciftci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:03:05 by yiciftci          #+#    #+#             */
/*   Updated: 2022/08/09 16:26:15 by yiciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char	**arg)
{
	int	i;
	int	j;

	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			i = 0;
			while (arg[j][i] != '\0')
			{
				write (1, &arg[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			j++;
		}
	}
	return (0);
}
