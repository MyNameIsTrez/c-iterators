/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 10:31:56 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/19 11:13:21 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "main.h"

////////////////////////////////////////////////////////////////////////////////

int	main(void)
{
	t_data	data;

	// Replace with your ft_bzero() or make data static
	bzero(&data, sizeof(t_data));
	data.width = 3;
	data.height = 2;
	while (sl_iterate_grid(&data) != FINISHED)
		printf("x: %d, y: %d\n", data.it.x, data.it.y);
	return (EXIT_SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////