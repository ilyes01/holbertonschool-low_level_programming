#!/usr/bin/python3

"""
returns the perimeter of the island described in grid:
grid is a list of list of integers:
- 0 represents a water zone
- 1 represents a land zone
- One cell is a square with side length 1
- Grid cells are connected horizontally/vertically (not diagonally).
- Grid is rectangular, width and height don’t exceed 100
* Grid is completely surrounded by water, and there is one island (or nothing).
* The island doesn’t have “lakes” (water inside that isn’t connected to the
water around the island).
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid:
    grid is a list of list of integers:
    - 0 represents a water zone
    - 1 represents a land zone
    - One cell is a square with side length 1
    - Grid cells are connected horizontally/vertically (not diagonally).
    - Grid is rectangular, width and height don’t exceed 100
    * Grid is completely surrounded by water, and there is one island
    (or nothing).
    * The island doesn’t have “lakes” (water inside that isn’t connected to the
    water around the island).
    """
    height = 0
    width = 0
    perimeter = 0
    lasty = 0
    lastx = 0
    positions = []
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                try:
                    if x == 0 or grid[y][x - 1] == 0:
                        width += 1
                    if x == len(grid[y]) - 1 or grid[y][x + 1] == 0:
                        width += 1
                    if y == 0 or grid[y - 1][x] == 0:
                        height += 1
                    if y == len(grid) - 1 or grid[y + 1][x] == 0:
                        height += 1
                except:
                    pass
    perimeter = width + height
    return (perimeter)
