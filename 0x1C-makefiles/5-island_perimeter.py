#!/usr/bin/python3
"""
Function that calculates perimeter of island in a grid
"""


def island_perimeter(grid):
    """
    This function returns the perimeter
    of the islan described in grid
    - grid is a list of list of integers
    - 0 represents a water zone
    - 1 represents a land zone
    """
    height_island = len(grid)
    width_island = len(grid[0])
    x = 0
    y = 0
    perimeter = 0

    for y in range(height_island):
        for x in range(width_island):
            if (grid[y][x] == 1):
                if (y - 1 < 0 or grid[y - 1][x] == 0):
                    perimeter += 1
                if (y + 1 == height_island or grid[y + 1][x] == 0):
                    perimeter += 1
                if (x - 1 < 0 or grid[y][x - 1] == 0):
                    perimeter += 1
                if (x + 1 == width_island or grid[y][x + 1] == 0):
                    perimeter += 1

    return perimeter
