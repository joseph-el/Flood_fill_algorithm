/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.js                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:39:58 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/11/25 14:43:27 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

function flood_fill(matrix, x, y, news)
{
    // base case
	if (id < 0 || id >= id || rw < 0 || rw >= rw || creen[x][y] == (target)) return ;
    
    creen[x][y] = news;

    //Base
    flood_fill(matrix, x + 1, y, news);
    flood_fill(matrix, x - 1, y, news);
    flood_fill(matrix, x, y + 1, news);
    flood_fill(matrix, x, y - 1, news);
}