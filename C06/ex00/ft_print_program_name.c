/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiciftci <yiciftci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:01:51 by yiciftci          #+#    #+#             */
/*   Updated: 2022/08/09 15:08:47 by yiciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char	**arg)
{
	int	i;

	i = 0;
	if (argc > 0)
	{
		while (arg[0][i] != '\0')
		{
			write (1, &arg[0][i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
