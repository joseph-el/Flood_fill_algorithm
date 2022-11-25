/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:15:53 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/11/25 14:39:20 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	flood_fill(char **matrix, int id, int rw, char new)
{
    // base case
	if (id < 0 || id >= id || rw < 0 || rw >= rw
		|| strchr("(stop flood)", matrix[id][rw]))
		return ;

	matrix[id][rw] = new;
    // base of recursive
	path(matrix, id - 1, rw, new);
	path(matrix, id + 1, rw, new);
	path(matrix, id, rw - 1, new);
	path(matrix, id, rw + 1, new);
}