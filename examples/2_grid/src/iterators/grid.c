/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   grid.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 11:09:50 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/19 11:12:41 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "../main.h"

////////////////////////////////////////////////////////////////////////////////

static t_iterator_status	resettable_iterate_grid(t_data *data, bool reset)
{
	if (reset)
	{
		sl_reset_iterate_height(data);
		sl_reset_iterate_width(data);
		return (RESET);
	}
	while (true)
	{
		while (true)
		{
			if (sl_iterate_width(data) != LOOPED)
				break ;
			return (LOOPED);
		}
		sl_reset_iterate_width(data);
		if (data->it.y == 0)
			sl_iterate_height(data);
		if (sl_iterate_height(data) != LOOPED)
			break ;
	}
	sl_reset_iterate_grid(data);
	return (FINISHED);
}

////////////////////////////////////////////////////////////////////////////////

t_iterator_status	sl_iterate_grid(t_data *data)
{
	return (resettable_iterate_grid(data, false));
}

void	sl_reset_iterate_grid(t_data *data)
{
	resettable_iterate_grid(data, true);
}

////////////////////////////////////////////////////////////////////////////////
