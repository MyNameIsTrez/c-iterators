/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   height.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 15:59:38 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/19 12:36:32 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "../main.h"

////////////////////////////////////////////////////////////////////////////////

static t_iterator_status	resettable_iterate_height(t_data *data, bool reset)
{
	static int	y;

	if (reset)
	{
		y = 0;
		data->it.y = 0;
		return (RESET);
	}
	while (y < data->height)
	{
		data->it.y = y;
		y++;
		return (LOOPED);
	}
	reset_iterate_height(data);
	return (FINISHED);
}

////////////////////////////////////////////////////////////////////////////////

t_iterator_status	iterate_height(t_data *data)
{
	return (resettable_iterate_height(data, false));
}

void	reset_iterate_height(t_data *data)
{
	resettable_iterate_height(data, true);
}

////////////////////////////////////////////////////////////////////////////////
