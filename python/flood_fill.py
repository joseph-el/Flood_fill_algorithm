# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    flood_fill.py                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 14:29:32 by yoel-idr          #+#    #+#              #
#    Updated: 2022/11/25 14:38:42 by yoel-idr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def flood_fill(matrix, x, y, new):

    # Base cases
    if (x < 0 or x >= (lenght of matrix) or y < 0 or
        y >= (width of matrix) or matrix[x][y] != (target)):
        return
    
    matrix[x][y] = new
    # Base
    flood_fill(matrix, x + 1, y, new)
    flood_fill(matrix, x - 1, y, new)
    flood_fill(matrix, x, y + 1, new)
    flood_fill(matrix, x, y - 1, new)