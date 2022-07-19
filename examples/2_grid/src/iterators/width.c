/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   width.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 15:57:06 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/19 11:10:31 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "../main.h"

////////////////////////////////////////////////////////////////////////////////

static t_iterator_status	resettable_iterate_width(t_data *data, bool reset)
{
	static int	x;

	if (reset)
	{
		x = 0;
		data->it.x = 0;
		return (RESET);
	}
	while (x < data->width)
	{
		data->it.x = x;
		x++;
		return (LOOPED);
	}
	sl_reset_iterate_width(data);
	return (FINISHED);
}

////////////////////////////////////////////////////////////////////////////////

t_iterator_status	sl_iterate_width(t_data *data)
{
	return (resettable_iterate_width(data, false));
}

void	sl_reset_iterate_width(t_data *data)
{
	resettable_iterate_width(data, true);
}

////////////////////////////////////////////////////////////////////////////////
