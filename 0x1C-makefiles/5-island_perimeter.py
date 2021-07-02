#!/usr/bin/python3
"""
Returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    LAND = 1
    WATER = 0
    perimeter = 0
    for y, row in enumerate(grid):
        for x, cell in enumerate(row):
            if cell == LAND:
                # print("land in [x= {:d} y= {:d}]".format(x, y))
                # left
                if y == 0 or grid[y - 1][x] == 0:
                    perimeter += 1
                # right
                if y == len(grid) - 1 or grid[y + 1][x] == 0:
                    perimeter += 1
                # up
                if x == 0 or grid[y][x - 1] == 0:
                    perimeter += 1
                # down
                if x == len(row) - 1 or grid[y][x + 1] == 0:
                    perimeter += 1                
    return perimeter
