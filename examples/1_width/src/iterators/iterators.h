/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iterators.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 10:29:17 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/19 11:05:26 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef ITERATORS_H
# define ITERATORS_H

////////////////////////////////////////////////////////////////////////////////

# include "iterator_status.h"

////////////////////////////////////////////////////////////////////////////////

t_iterator_status	sl_iterate_width(t_data *data);
void				sl_reset_iterate_width(t_data *data);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
