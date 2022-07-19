/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   grid.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 11:09:50 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/19 12:36:32 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "../main.h"

////////////////////////////////////////////////////////////////////////////////

static t_iterator_status	resettable_iterate_grid(t_data *data, bool reset)
{
	if (reset)
	{
		reset_iterate_height(data);
		reset_iterate_width(data);
		return (RESET);
	}
	while (true)
	{
		while (true)
		{
			if (iterate_width(data) != LOOPED)
				break ;
			return (LOOPED);
		}
		reset_iterate_width(data);
		if (data->it.y == 0)
			iterate_height(data);
		if (iterate_height(data) != LOOPED)
			break ;
	}
	reset_iterate_grid(data);
	return (FINISHED);
}

////////////////////////////////////////////////////////////////////////////////

t_iterator_status	iterate_grid(t_data *data)
{
	return (resettable_iterate_grid(data, false));
}

void	reset_iterate_grid(t_data *data)
{
	resettable_iterate_grid(data, true);
}

////////////////////////////////////////////////////////////////////////////////
