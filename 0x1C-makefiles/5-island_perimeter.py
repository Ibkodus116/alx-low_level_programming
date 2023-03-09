#!/usr/bin/python3
'''Module Doc
'''


def island_perimeter(grid):
    '''Function Doc
    '''
    if not grid or not grid[0]:
        return 0  # empty grid

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # count the number of adjacent water cells (0s)
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1  # top edge
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1  # left edge
                if i == rows-1 or grid[i+1][j] == 0:
                    perimeter += 1  # bottom edge
                if j == cols-1 or grid[i][j+1] == 0:
                    perimeter += 1  # right edge

    return perimeter
