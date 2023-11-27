#!/usr/bin/python3
""" Create a function def island_perimeter(grid):
that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """return the perimiter of an island.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """

    w = len(grid[0])
    h = len(grid)
    edg = 0
    s = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                s += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edg += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edg += 1
    return s * 4 - edg * 2
