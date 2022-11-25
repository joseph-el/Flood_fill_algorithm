/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:33:33 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/11/25 14:37:49 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void floodfill(char **matrix, int x, int y, char news)
{
    // Base cases
	if (id < 0 || id >= (lenght of matrix) || rw < 0 || rw >= (width of matrix)
		|| strchr("(stop flood)", matrix[id][rw]))
		return ;

    matrix[x][y] = news;
    // Base
    floodfill(matrix, x+1, y, news);
    floodfill(matrix, x-1, y, news);
    floodfill(matrix, x, y+1, news);
    floodfill(matrix, x, y-1, news);
}