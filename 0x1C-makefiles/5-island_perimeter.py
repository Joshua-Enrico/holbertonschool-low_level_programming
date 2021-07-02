#!/usr/bin/python3
"""
5-main
"""


def island_perimeter(grid):
    """return a island's square"""
    ln = len(grid[1])
    llen = len(grid)
    square = 0
    for a in range(len(grid)):
        for b in range(len(grid[a])):
            if grid[a][b] == 1:
                if b < ln - 1:
                    if grid[a][b + 1] == 0:
                        square += 1
                if b > 0:
                    if grid[a][b - 1] == 0:
                        square += 1
                if a < llen - 1:
                    if grid[a + 1][b] == 0:
                        square += 1
                if a > 0:
                    if grid[a - 1][b] == 0:
                        square += 1
    return square
