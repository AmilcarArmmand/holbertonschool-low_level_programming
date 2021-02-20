#!/usr/bin/python3
"""Function that returns the perimeter of an island described in grid
"""


def island_perimeter(grid):
    """Returns the perimeter of the island
    Args:
        grid
    Return:
        The perimeter of the island in grid.
    """
    grid_width = len(grid[0])
    grid_height = len(grid)
    surrounding_edges = 0
    island_size = 0
    perimeter = 0

    for row in range(grid_height):
        for column in range(grid_width):
            if grid[row][column] == 1:
                island_size += 1
                if (column > 0 and grid[row][column - 1] == 1):
                    surrounding_edges += 1
                if (row > 0 and grid[row - 1][column] == 1):
                    surrounding_edges += 1
    return island_size * 4 - surrounding_edges * 2
