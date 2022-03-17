#!/usr/bin/python3
"""
island perimeter
"""


def island_perimeter(grid):
    result = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if i - 1 >= 0 and grid[i - 1][j] == 1:
                    result = result - 2
                if j - 1 >= 0 and grid[i][j - 1] == 1:
                    result = result - 2
                result = result + 4
    return(result)
