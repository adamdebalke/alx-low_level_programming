#!/usr/bin/python3

"""
Module for find the perimeter
"""


def island_perimeter(grid):
    """Method for calculate the perimeter of the island"""

    i = 0

    for line in range(len(grid)):
        for col in range(len(grid[line])):
            if grid[line][col] is 1:
                if col is 0 or grid[line][col - 1] is 0:
                    i += 1
                if col is len(grid[line]) - 1 or grid[line][col + 1] is 0:
                    i += 1
                if line is 0 or grid[line - 1][col] is 0:
                    i += 1
                if line is len(grid) - 1 or grid[line + 1][col] is 0:
                    i += 1
    return i
