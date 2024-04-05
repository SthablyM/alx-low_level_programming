#!/usr/bin/python3
"""Defines island perimeter"""


def island_perimeter(grid):
    """Return the perimiter of an island"""
    width = len(grid[0])
    height = len(grid)
    e = 0
    c = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                c += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    e += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    e += 1
    return c * 4 - e * 2
