#!/usr/bin/python3
"""Defines a function to determine the perimiter of an island"""


def island_perimeter(grid):
    """Determine the perimeter of a grid"""

    height = len(grid)
    if grid[0]:
        width = len(grid[0])

    perimeter = 0

    for row_i, row in enumerate(grid):  # for each row
        for col_i, col in enumerate(row):  # checking each unit of row

            if col is 1:  # if index is land

                # check above block
                if row_i is 0:
                    perimeter = perimeter + 1
                else:
                    if grid[row_i - 1][col_i] is not 1:
                        perimeter = perimeter + 1

                # check left block
                if col_i is 0:
                    perimeter = perimeter + 1
                else:
                    if grid[row_i][col_i - 1] is not 1:
                        perimeter = perimeter + 1

                # check right block
                if col_i is (width - 1):
                    perimeter = perimeter + 1
                else:
                    if grid[row_i][col_i + 1] is not 1:
                        perimeter = perimeter + 1

                # check below block
                if row_i is (height - 1):
                    perimeter = perimeter + 1
                else:
                    if grid[row_i + 1][col_i] is not 1:
                        perimeter = perimeter + 1

    return perimeter
