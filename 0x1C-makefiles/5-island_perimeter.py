#!/usr/bin/python3

def island_perimeter(grid):
    """ returns the perimeter of the island described in grid"""

    perimeter = 0

    rows = len(grid)
    columns = len(grid[0])
    perimeter = 0

    for i in range(1, rows - 1):
        for j in range(1, columns - 1):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
